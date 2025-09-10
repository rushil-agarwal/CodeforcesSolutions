#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> vec(n), store(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    if(!vec[n-1])
        store[n-1] = 1;

    for(int i = n-2; i>=0; i--){
        if(vec[i] == 1){
            store[i] = 0;
        } else {
            store[i] = store[i+1]+1;
        }
        //cout << vec[i] << " " << store[i] << endl;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        //cout << store[i] <<  " ";
        if(store[i] >= k){
            ans++;
            i+=k;
        }
    }

    cout << endl << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}