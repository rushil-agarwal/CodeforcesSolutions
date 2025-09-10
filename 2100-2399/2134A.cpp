#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    int n, a, b; cin >> n >> a >> b;

    if( (n%2 == a%2) && (n%2 == b%2))
        return true;

    if(b >= a && (b%2 == n%2))
        return true;
    return false;
}

int main(){

    ll t;
    cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}//
// Created by Lenovo on 26-08-2025.
//
