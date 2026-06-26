#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

class segmentTree{
    vector<int> maxi, mini;
    int n;
public:
    segmentTree(vector<int> &nums){
        n = nums.size();
        maxi.resize(4*n);
        mini.resize(4*n);

        buildTree(1, 0, n-1, nums);
    }

    void buildTree(int node, int left, int right, vector<int> &nums){
        if(left == right){
            maxi[node] = nums[left];
            mini[node] = nums[left];
            return;
        }

        int mid = (left+right)/2;
        buildTree(node*2, left, mid, nums);
        buildTree(node*2+1, mid+1, right, nums);

        maxi[node] = max(maxi[node*2], maxi[node*2+1]);
        mini[node] = min(mini[node*2], mini[node*2+1]);
    }

    int queryMin(int node, int left, int right, int qLeft, int qRight){
        if(qRight < left || right < qLeft) 
            return INT_MAX;
        if(qLeft <= left && right <= qRight) 
            return mini[node];

        int mid = (left+right)/2;

        return min(queryMin(node*2, left, mid, qLeft, qRight), queryMin(node*2+1, mid+1, right, qLeft, qRight));
    
            }

    int queryMax(int node, int left, int right, int qLeft, int qRight){
        if(qRight < left || right < qLeft) 
            return INT_MIN;
        if(qLeft <= left && right <= qRight) 
            return maxi[node];

        int mid = (left+right)/2;

        return max(queryMax(node*2, left, mid, qLeft, qRight), queryMax(node*2+1, mid+1, right, qLeft, qRight));
    }

    int queryMin(int qLeft, int qRight){
        return queryMin(1, 0, n-1, qLeft, qRight);
    }

    int queryMax(int qLeft, int qRight){
        return queryMax(1, 0, n-1, qLeft, qRight);
    }
};

bool check(vector<int> &nums, int len) {
    int n = nums.size();

    vector<int> freq(n + 1, 0),  first(n+1, INT_MAX), last(n+1, INT_MIN);
    int distinct = 0;
    deque<int> minQ, maxQ;

    for (int i = 0; i < len; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] == 1) 
        distinct++;

        while (!minQ.empty() && nums[minQ.back()] >= nums[i]) 
            minQ.pop_back();
        minQ.push_back(i);

        while (!maxQ.empty() && nums[maxQ.back()] <= nums[i]) 
            maxQ.pop_back();
        maxQ.push_back(i);
    }

    if (distinct == len) {
        int minE = nums[minQ.front()];
        int maxE = nums[maxQ.front()];

        if (maxE - minE + 1 == len) {
            first[minE] = min(first[minE], 0);
            last[minE] = max(last[minE], 0);
        }
    }

    for (int start = 1; start + len <= n; start++) {
        freq[nums[start - 1]]--;
        if (freq[nums[start - 1]] == 0)     
            distinct--;
        if (!minQ.empty() && minQ.front() == start - 1) 
            minQ.pop_front();
        if (!maxQ.empty() && maxQ.front() == start - 1) 
            maxQ.pop_front();


        freq[nums[start + len - 1]]++;
        if (freq[nums[start + len - 1]] == 1) 
            distinct++;

        while (!minQ.empty() && nums[minQ.back()] >= nums[start + len - 1]) 
            minQ.pop_back();
        minQ.push_back(start + len - 1);

        while (!maxQ.empty() && nums[maxQ.back()] <= nums[start + len - 1]) 
            maxQ.pop_back();
        
        maxQ.push_back(start + len - 1);

        if (distinct == len) {
            int minE = nums[minQ.front()];
            int maxE = nums[maxQ.front()];

            if (maxE - minE + 1 == len) {
                first[minE] = min(first[minE], start);
                last[minE] = max(last[minE], start);
            }
        }
    }

    for (int x = 1; x + 2 * len - 1 <= n; x++) {
        if (first[x] == INT_MAX || first[x + len] == INT_MAX) continue;

        if (last[x + len] - first[x] >= len ||
            last[x] - first[x + len] >= len) {
            return true;
        }
    }

    return false;
}



void solve(){
    int n; cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

 //   segmentTree segTree(nums);
    for(int len = n/2; len>=1; len--){
        if(check(nums, len)){
            cout << len << '\n';
            return;
        }
    }

    cout << "0\n";

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}