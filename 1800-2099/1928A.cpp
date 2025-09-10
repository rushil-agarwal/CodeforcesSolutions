#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll a,b; cin >> a >> b;

    if(a%2 && b%2)
        return 0;
    if(a == 2*b || b == 2*a) {
        if (a % 2 == 0 && b % 2 == 0)
            return 1;
        return 0;
    }

    return 1;


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