#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int mat[n][n];
    char temp;
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if(temp=='0')
                mat[i][j]=0;
            else
                mat[i][j]=1;
        }
    }

    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout << mat[i][j];
            j+=k;
        }
        cout << endl;
        i+=k;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}