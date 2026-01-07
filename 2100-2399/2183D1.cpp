#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void getChildren(int node, int parent, vector<int> &children, vector<vector<int>> &adj){

    int cnt=0;

    for(auto it: adj[node]){
        if(it != parent){
            cnt++;
            getChildren(it, node, children, adj);
        }
    }

    children[node] = cnt;

}

void solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n);

    for(int i=0; i<n-1; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> depth(n+1, 0);
    vector<bool> visited(n, false);
    queue<int> q;
    int dist=0;
    q.push(0);
    visited[0] = true;

    while(q.size()){
        int lvlSize = q.size();
        depth[dist] = lvlSize;
        dist++;

        while(lvlSize--){
            int node = q.front(); q.pop();
            for(auto it: adj[node]){
                if(!visited[it]){
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
    }

    vector<int> children(n, 0);
    getChildren(0, -1, children, adj);

    int ans =  0;

    ans = max(ans, *max_element(children.begin(), children.end())+1);
    ans = max(ans, *max_element(depth.begin(), depth.end()));

    // for(auto it: children)
    //     cout << it << endl;

    // cout << "################   " << ans << endl;

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}