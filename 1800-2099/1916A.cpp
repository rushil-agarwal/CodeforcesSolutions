#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n, removed, seven=0, seventeen=0;
    cin >> n >> removed;
    ll b[n]; ll temp1 =1;
    for(int i=0; i<n;i++) {
        cin >> b[i];
        temp1*=b[i];
    }
    if(2023%temp1 != 0){
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
        cout << 2023/temp1 << " ";
        for(int i=0; i<removed-1;i++){
            cout << "1 ";
        } cout << endl;
    }

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}