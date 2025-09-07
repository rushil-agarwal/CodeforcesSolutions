#include <bits/stdc++.h>
#define size 100000
using namespace std;

void solve(){
    long div = 10000007;
    int x=INT_MIN;
    int t; cin >> t;
    vector<int> n(t), k(t);
    for(int i=0; i<t; i++) {
        cin >> n[i];
        x = max(n[i], x);
    }
    for(int i=0; i<t; i++) {
        cin >> k[i];
        x = max(x, k[i]);
    }



    long C[x+1][x+1];
    for (int i = 0; i <= x+1; i++) {
        for (int j = 0; j <= min(i, x+1); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }


    for(int i=0; i<t; i++)
        cout << C[n[i]][k[i]] %  div << endl;
}

int main(){

    int t;
    t=1;
    while(t--)
        solve();
    return 0;
}