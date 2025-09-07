#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll arr[n-1];
    for(int i=0; i<n-1; i++)
        cin >> arr[i];

    ll x = 1000;
    cout << x << " ";
    for(int i=0; i<n-1; i++){
        cout << x + arr[i] << " ";
        x += arr[i];
    } cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}