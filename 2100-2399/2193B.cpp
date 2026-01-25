#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void funct(int number, int idx, vector<int> &nums){
    if(idx == nums.size())
        return;
    if(nums[idx] == number){
        funct(number-1, idx+1, nums);
        return;
    }

    int n = nums.size(), i = idx;

    for(; i<n; i++){
        if(nums[i] == number)
            break;
    }

    reverse(nums.begin()+idx, nums.begin()+i+1);
}

void solve(){
    int n;  cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    funct(n, 0, nums);

    for(auto it: nums)
        cout << it << " ";

    cout << '\n';
}

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