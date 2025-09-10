#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,temp;
    cin >> n;
    vector<ll> vec(n+1,1);
    cout << 1 << " ";
    for(int i=2;i<n+1;i++){
        if(vec[i]){
            cout << i << " "; vec[i] = 0;
            temp=i*2;
            while(temp<n+1){
                if(vec[temp] && temp < n+1){
                    cout << temp << " "; vec[temp] = 0;
                }
                temp*=2;
            }
        }
    }
    cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}