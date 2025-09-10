#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m,k, counter=0,a=0,b=0;
    cin >> n >> m >> k;

    vector<int> vec(k,0) , veca(k,0) , vecb(k,0);

    ll arr[n], brr[m];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] <= k){
            counter++;
            veca[arr[i] - 1] = 1;
            vec[arr[i]-1] = 1;
        }
    }
    for(int i=0; i<m; i++){
        cin >> brr[i];
        if(brr[i] <= k){
            counter++;
            vecb[brr[i] - 1] = 1;
            vec[brr[i]-1] = 1;

        }
    }
    for(int i=0; i<k;i++){
        if(vec[i] != 1){
            cout << "NO" << endl;
            return;
        }
        if(veca[i] == 1){
            a++;
        }
        if(vecb[i] == 1){
            b++;
        }
    }
    if(counter>=k){

        if(a >= k/2 && b>= k/2){
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}