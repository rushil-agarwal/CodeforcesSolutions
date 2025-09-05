#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec1;
    for(int i=0;i<n;i++){
        ll temp;
        cin >>temp;
        vec1.push_back(temp);
    }
    sort(vec1.begin(),vec1.end());
    for(int i=n-1;i>=0;i--){
        cout << vec1[i] << " ";
    } cout << endl;

}

int main(){
    ll t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}