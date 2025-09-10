#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n+1);

    for(int i=0; i<n-1; i++){
        int u, v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int leafs=0;
    vector<bool> isLeaf(n+1, false);

    for(int i=1; i<=n; i++){
        if(adj[i].size() == 1){
            leafs++;
            isLeaf[i] = true;
        }
    }

    int maxLeafNeighbour =0;

    for(int i=1; i<=n; i++){
        int curr=0;
        if(isLeaf[i])
            curr++;

        for(auto &it: adj[i]){
            if(isLeaf[it])
                curr++;
        }

        maxLeafNeighbour = max(maxLeafNeighbour, curr);
    }

    cout << leafs - maxLeafNeighbour << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}