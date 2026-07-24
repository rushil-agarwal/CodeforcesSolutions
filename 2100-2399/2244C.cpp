#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &indexes, set<int> &numbers, vector<int> &nums){
    visited[node] = true;
    indexes.push_back(node+1);
    numbers.insert(nums[node]);

    for(auto &it: adj[node]){
        if(!visited[it])
            dfs(it, adj, visited, indexes, numbers, nums);
    }
}

void solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    vector<vector<int>> adj(n+1);

    for(int i=0; i<n; i++){
        if(i-x >= 0)
            adj[i].push_back(i-x);
        if(i+x < n)
            adj[i].push_back(i+x);

        if(i-y >= 0)
            adj[i].push_back(i-y);
        if(i+y < n)
            adj[i].push_back(i+y);
    }

    vector<bool> visited(n, false);

    for(int i=0; i<n; i++){
        if(visited[i])
            continue;

        vector<int> indexes;
        set<int> numbers;

        dfs(i, adj, visited, indexes, numbers, nums);

        for(auto &it: indexes){
            if(numbers.find(it) == numbers.end()){
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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