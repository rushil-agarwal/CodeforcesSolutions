#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    vector<ll> vec1, vec2;
    cin >> n;
    for(int i=0; i<n; i++){
        vector<ll> vector;
        int m; cin >> m;
        for(int j=0; j<m; j++){
            ll x; cin >> x;
            vector.push_back(x);
        }
        sort(vector.begin(), vector.end());
        vec1.push_back(vector[0]); vec2.push_back(vector[1]);
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    if(n == 1){
        cout << vec1[0] << endl;
        return;
    } else {
        ll sum=vec1[0];
        for(int i=1; i<vec2.size();i++)
            sum+=vec2[i];

        cout << sum << endl;
    }

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}