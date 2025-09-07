#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll w,h;
    cin >> w >> h;
    ll n;
    vector<ll> vec1,vec2,vec3,vec4;
    cin >> n;
    for(int i=0; i<n; i++){
        ll temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    sort(vec1.begin(), vec1.end());
    cin >> n;
    for(int i=0; i<n; i++){
        ll temp;
        cin >> temp;
        vec2.push_back(temp);
    }
    sort(vec2.begin(), vec2.end());
    cin >> n;
    for(int i=0; i<n; i++){
        ll temp;
        cin >> temp;
        vec3.push_back(temp);
    }
    sort(vec3.begin(), vec3.end());
    cin >> n;
    for(int i=0; i<n; i++){
        ll temp;
        cin >> temp;
        vec4.push_back(temp);
    }
    sort(vec4.begin(), vec4.end());
    ll x = max(vec1[vec1.size()-1] - vec1[0], vec2[vec2.size()-1] - vec2[0]);
    ll y = max(vec3[vec3.size()-1] - vec3[0], vec4[vec4.size()-1] - vec4[0]);
    cout << max(h*x , w*y) << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}