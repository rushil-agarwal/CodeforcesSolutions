#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    float n,m,k;
    cin >> n >> m >> k;
    if(m == 1)
        return 0;
    if(n == m) {
        if (k < n - 1)
            return 1;
        else
            return 0;
    }
    if(k>= n-ceil(n/m))
        return 0;
    else
        return 1;
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