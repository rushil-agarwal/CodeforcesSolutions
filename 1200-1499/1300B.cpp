#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec,classa,classb;

    for(int i=0;i<2*n;i++){
        ll temp;
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());

    cout << abs(vec[n] - vec[n-1]) << endl;

}

int main(){
    ll temp;
    cin >> temp;
    while(temp--){
        solve();
    }
    return 0;
}