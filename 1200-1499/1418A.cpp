#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll x,y,k;
    cin >> x >> y >> k;
    cout << ((y+1)*k + x-3)/(x-1) + k << endl;

}

int main(){
    ll t;
     cin >> t;
     while(t--)
         solve();
}