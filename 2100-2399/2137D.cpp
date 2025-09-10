#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> b(n+1), ans(n+1, 0);
    vector<vector<int>> adj(n+1);
    int cnt = 1;

    for(int i=1; i<=n; i++)
        cin >> b[i];

    for(int i=1; i<=n; i++)
        adj[b[i]].push_back(i);

    for(int i=1; i<=n; i++){
        int reqd = adj[i].size();

        if(!reqd)
            continue;

        if(reqd%i != 0){
            cout << -1 << endl;
            return;
        }

        //adj[i] -> vector which stores on which indexed i need elements of freq 2
        //ans[i] -> value daalni hai
        for(int j = 0; j<reqd; j+=i){
            for(int k = 0; k<i; k++){
                ans[adj[i][j+k]] = cnt;
            }
            cnt++;
        }
    }

    for(int i=1; i<=n; i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}