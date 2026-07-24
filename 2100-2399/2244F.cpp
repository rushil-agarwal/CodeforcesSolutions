    #include<bits/stdc++.h>
    #define ll long long
    #define pii pair<int, int>
    #define tiii tuple<int, int, int>
    #define mod (int)(1e9+7)
    using namespace std;

    void dfs(int node, vector<vector<int>> &adj, vector<int> &inOrder){
        inOrder.push_back(node);

        for(auto &it: adj[node]){
            dfs(it, adj, inOrder);
        }
    }

    void solve(){
        int n; cin >> n;
        vector<vector<int>> adj(n+1);
        vector<int> inOrder;
        vector<int> minVal(n+1, INT_MAX), maxVal(n+1, INT_MIN), children(n+1, 0);;
        vector<bool> works(n+1, false);

        for(int i=2; i<=n; i++){
            int temp; cin >> temp;
            adj[temp].push_back(i);
        }

        vector<int> values(n+1, 0);
        for(int i=1; i<=n; i++)
            cin >> values[i];

        dfs(1, adj, inOrder);

        for(int i = n-1; i>=0; i--){
            int node = inOrder[i];

            if(adj[node].size() == 0){
                // is leaf
                minVal[node] = values[node];
                maxVal[node] = values[node];
                works[node] = true;
                children[node] = 1;
                continue;
            }

            bool flag = true;
            int currMin = INT_MAX, currMax = INT_MIN, totalChild = 0;

            for(auto it: adj[node]){
                if(!works[it])
                    flag = false;
                currMin = min(currMin, minVal[it]);
                currMax = max(currMax, maxVal[it]);
                totalChild += children[it];
            }

            minVal[node] = currMin;
            maxVal[node] = currMax;
            children[node] = totalChild;

            if(!flag){
                // koi bidga hua baccha hai
                works[node] = false;
                continue;
            }

            if(maxVal[node] - minVal[node] + 1 != children[node]){
                // missing values
                works[node] = false;
                continue;
            }

            int m = adj[node].size(), dikkat = 0;

            if(m == 1){
                works[node] = true;
                continue;
            }

            for(int i=0; i<m; i++){
                int temp1 = adj[node][i];
                int temp2 = adj[node][(i+1)%m];

                if(maxVal[temp1] > minVal[temp2])
                    dikkat++;
            }

            if(dikkat == 1)
                works[node] = true;
            else
                works[node] = false;

        

        }

        if(works[1])
            cout << "YES\n";
        else
            cout << "NO\n";

        
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