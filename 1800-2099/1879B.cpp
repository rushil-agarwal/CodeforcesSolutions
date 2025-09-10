#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll func(ll n, ll arr[]){
    int ans = arr[0];
    for(int i=1; i<n;i++)
        if(ans > arr[i])
            ans = arr[i];
    return ans;
}

void solve(){
    ll n,sum=0;
    cin >> n;
    ll arr[n], brr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n ;i++)
        cin >> brr[i];
    ll mina = func(n,arr);
    ll minb = func(n,brr);

    ll temp1 = 0, temp2=0;
    for(int i=0; i<n; i++){
        temp1+= brr[i] + mina;
        temp2+= arr[i] + minb;
    }
    cout << min(temp1, temp2) << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}