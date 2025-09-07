#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll func1(ll x){
    if(x%2 == 0){
        return x/2;
    } else {
        return (x/2+1);
    }
}

void solve(){
    float known=0; float unknown=0; float aviaries=0;
    ll n;
    cin >> n;
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp == 1){
            unknown++;
        } else {
            known += unknown;
            unknown=0;
        }
        aviaries = max(aviaries,unknown + ceil(known/2));
    }
    cout << aviaries << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
}