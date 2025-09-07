#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool funct(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
        vec[i]--;
    }

    int ans=0;
    vector<int> vis(n,0);

    for(int i=0; i<n; i++){
        if(vis[i] == 0){
            int temp = i, path=0;
            while(!vis[temp]){
                vis[temp] = 1;
                temp = vec[temp];
                path++;
            }

            ans+=(path-1)/2;
        }
    }

    cout << ans  << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}