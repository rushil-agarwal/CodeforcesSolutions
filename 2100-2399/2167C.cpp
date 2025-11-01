#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    bool odd = false, even = false;
    vector<ll> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i]&1)
            odd = true;
        else
            even = true;
    }

    if(odd &&  even){
        sort(vec.begin(), vec.end());
    }

    for(auto &it: vec)
            cout << it << " ";
        cout << "\n";



    
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}