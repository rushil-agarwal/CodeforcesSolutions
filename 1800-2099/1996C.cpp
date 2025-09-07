#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n, q; cin >> n >>q;

     vector<vector<int>> vecA(n+1, vector<int>(26,0));
     vector<vector<int>> vecB(n+1, vector<int>(26,0));

     for(int i=1; i<=n; i++){
         char ch; cin >> ch;
         vecA[i][ch-'a']++;

         for(int j = 0; j<26; j++){
             vecA[i][j] += vecA[i-1][j];
         }
     }

    for(int i=1; i<=n; i++){
        char ch; cin >> ch;
        vecB[i][ch-'a']++;

        for(int j = 0; j<26; j++){
            vecB[i][j] += vecB[i-1][j];
        }
    }

    for(int i=0; i<q; i++){
        int l,r; cin >> l >> r;
        int ans=0;

        for(int j=0; j<26; j++){
            int temp1 = vecA[r][j] - vecA[l-1][j];
            int temp2 = vecB[r][j] - vecB[l-1][j];

            ans+=abs(temp1 - temp2);
        }

        cout << ans/2 << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}