#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll n;
    cin >> n;
    vector<ll> vec1,vec2;
    for(ll i = 0;i<n;i++){
        ll temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    vec2 = vec1;
    sort(vec1.begin(),vec1.end());
    for(ll i=0;i<n;i++){
        if(vec1[i]%2 == 0){
            if(vec2[i]%2 != 0)
                return 0;
        } else {
            if(vec2[i]%2 != 1)
                return 0;
        }
    }

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