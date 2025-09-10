#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<n;i++){
        if(a[i] != c[i] && b[i] != c[i])
            return 1;

    }
    return 0;
}

int main(){
    ll t;
    cin >> t;
    while(t--) {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}