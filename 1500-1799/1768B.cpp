#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];

    ll sorted=1;

    for(int i=0; i<n; i++){
        if(vec[i] == sorted){
            sorted++;
        }
    }

    cout <<  (n-sorted+k)/k << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}