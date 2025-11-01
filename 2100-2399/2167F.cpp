#include<bits/stdc++.h>
using namespace std;

void dfs(int u, int p, vector<vector<int>> &adj, vector<int> &count){

    count[u] = 1;

    for(auto v : adj[u]){
        if(v == p) 
            continue;

        dfs(v, u, adj, count);

        count[u] += count[v];
    }
}

void solve(){

    int n, k; 
    cin >> n >> k;

    vector<vector<int>> adj(n + 1);
    vector<int> count(n + 1, 0);

    for(int i = 0; i < n - 1; i++){
        int u, v; 
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0, adj, count);

    long long ans = n;  

    for(int i = 2; i <= n; i++){

        long long s1 = count[i];
        long long s2 = n - s1;

        // agar enogh size hai to add to ans
        if(s1 >= k) 
            ans += s2;
        
            if(s2 >= k) 
            ans += s1;

    }

    cout << ans << endl;
}

int main(){

    int t; cin >> t;

    while(t--)
        solve();

    return 0;
}
