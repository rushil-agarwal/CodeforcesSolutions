#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll n; cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0; i<n-2; i++){
        if(arr[i] <0){
            return 0;
        }
        arr[i+1] -= arr[i]*2;
        arr[i+2] -= arr[i];
        arr[i] -= arr[i];
    }

    if(arr[n-2] != 0 || arr[n-1] != 0)
        return 0;
    else
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