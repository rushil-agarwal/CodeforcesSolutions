#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    int high=0, low = INT_MAX, temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        high = max(high, temp);
        low = min(low, temp);
    }
    cout << high - low << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}