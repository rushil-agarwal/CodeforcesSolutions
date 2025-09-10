#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll h,w;
    cin >> h >> w;
    if(w%2 == 0){
        cout << h*w/2 << endl;
    } else {
        cout << h*(w-1)/2 << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}