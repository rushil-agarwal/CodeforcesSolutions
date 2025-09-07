#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> vec;
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
            if(mat[i][j] < 0)
                vec.push_back(make_pair(i,j));
        }
    }
    int ans=0;
    for(int i=0; i<vec.size(); i++){
        int x = vec[i].first, y = vec[i].second;
        if(mat[x][y] >=0)
            continue;

        int toAdd = abs(mat[x][y]);
        ans+=toAdd;

        while(x<n && y<n){
            mat[x][y]+=toAdd;
            x++; y++;
        }
//        for(int a = x; a<min(n - x, n - y); a++){
//            for(int b = y; b<min(n-x, n-y); b++){
//                mat[a][b]+=toAdd;
//            }
//        }

    }

    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}