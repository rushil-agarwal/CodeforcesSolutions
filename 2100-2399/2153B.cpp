#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(){
    ll x, y, z;
    cin >> x >> y >> z;

    for(int i= 0; i<64; i++){
        int a = (x>>i)&1;
        int b = (y>>i)&1;
        int c = (z>>i)&1;

        if((x&y&(~z)) || (x&(~y)&z) || ((~x)&y&z))
            return false;
    }

    return true;
}

int main(){

    ll t;
    cin >> t;
    while(t--){
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
    }
    return 0;
}