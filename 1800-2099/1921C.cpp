#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll n, charge, a,b;
    cin >> n >> charge >> a >> b;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(a*arr[n-1] < charge)
        return 1;

    if(n == 1){
        if(charge <= min(b,arr[0]*a))
            return 0;
    }
    charge -= min(b, arr[0]*a);
    for(int i=0;i<n-1;i++){
        charge -= min((arr[i+1] - arr[i])*a, b);
    }
    if(charge<=0)
        return 0;
    return 1;
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
}