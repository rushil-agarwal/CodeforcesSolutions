#include <bits/stdc++.h>
#define ll int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int x=0; x<n; x++){
        cin >> arr[x];
    }

    if(n == 1){
        cout << "0" << endl;
        return;
    }
    if(n == 2){
        if(arr[0] == arr[1])
            cout << "0" << endl;
        else
            cout << "1" << endl;
        return;
    }

    ll temp2=n-1;
    for(int j=0; j<n-1;j++){
       if(arr[j] == arr[j+1]){
           temp2--;
       } else {
           break;
       }
    }
    ll temp3 = n-1;
    for(int j= n-1; j>0; j--){
        if(arr[j] == arr[j-1]){
            temp3--;
        } else {
            break;
        }
    }
    ll temp1 = INT_MAX;
    if(arr[0] == arr[n-1] && temp3>0 && temp2 >0){
        temp1 = n - (n-temp2) - (n-temp3);
    }
    cout << min(temp1, min(temp2,temp3)) << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}