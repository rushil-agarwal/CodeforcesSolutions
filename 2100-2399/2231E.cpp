#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

class Solution {
    int n, d;
    int time = 0;
    ll ans1=0, ans2=0, ans3=0;
    // path solution, y-path but outside, y-path but inside
    vector<vector<int>> adj;
    vector<int> timeIn, timeOut;
    vector<vector<int>> up, down;
    vector<int> height;

    void solve_path(int node){
        vector<int> dist(n, 0);

        auto dfs = [&](auto &self, int u, int p, int curr) -> void {
            dist[u] = curr;
            for(auto it: adj[u]){
                if(it != p)
                    self(self, it, u, curr+1);
            }
        };

        dfs(dfs, node, -1, 0);

        for(int i = node+1; i<n; i++){
            if(dist[i] == d-1)
                ans1 += d-2;
        }
    }

    void normal_dfs(int node, int parent){
        timeIn[node] = time;
        time++;

        for(auto it: adj[node]){
            if(it == parent)
                continue;
            normal_dfs(it, node);
        }

        timeOut[node] = time;
    }

    vector<int> final_dfs(int node, int parent, int curr){
        height[node] = curr;
        int m = adj[node].size();
        vector<vector<int>> families(m);
        vector<int> all;

        all.push_back(node);

        for(int i=0; i<m; i++){
            int child = adj[node][i];

            if(child == parent)
                continue;

            families[i] = final_dfs(child, node, curr+1);
            for(auto it: families[i])
                all.push_back(it);

            for(int j = 0; j<i; j++){
                
                for(auto node1: families[i]){
                    for(auto node2: families[j]){
                        int currDist = height[node1] + height[node2] - 2*curr;
                        if(currDist >= d-1)
                            continue;

                        int needed = d - currDist - 1;
                        
                        if(needed<=0)
                            continue;

                        ans2 += up[node][needed];
                        int cnt3 = down[node][needed];
                        cnt3 -= down[adj[node][i]][needed-1];
                        cnt3 -= down[adj[node][j]][needed-1];
                        ans3 += cnt3;
                    }
                }
            }
        }

        return all;
    }

    void calculate_dfs(){
        
        for(int i=0; i<n; i++){


            auto temp_dfs = [&](auto &self, int node, int parent, int curr) -> void{
                if(timeIn[i] <= timeIn[node] && timeIn[node] < timeOut[i] )
                    down[i][curr]++;
                else
                    up[i][curr]++;

                for(auto it: adj[node]){
                    if(it != parent)
                        self(self, it, node, curr+1);
                }
            };

            temp_dfs(temp_dfs, i, -1, 0);
        }
    }

public:

    void solve(){
        cin >> n >> d;

        adj.resize(n);
        timeIn.resize(n, 0);
        timeOut.resize(n, 0);
        height.resize(n, 0);
        up.resize(n, vector<int>(n, 0));
        down.resize(n, vector<int>(n, 0));

        for(int i=0; i<n-1; i++){
            int u, v; cin >> u >> v;
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }

        for(int i=0; i<n; i++)
            solve_path(i);

        normal_dfs(0, -1);

        calculate_dfs();

        final_dfs(0, -1, 0);
        

        cout << ans1 + ans2 + ans3/3 << '\n';
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--){
        Solution obj1;
        obj1.solve();
    }
    return 0;
}