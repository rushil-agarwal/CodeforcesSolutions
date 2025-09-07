#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> vec;
    for(int i=0; i<n;i++){
        ll x;
        cin >> x;
        vec.push_back(make_pair(x,i+1));
    }
    sort(vec.begin(), vec.end());
    ll time=0;
    vector<ll> vec2(n+1,0);
    ll counter1 =-1; ll counter2 =1;
    for(int i=0;i <n; i++){
        if(i%2 == 1){
            time += 2*vec[i].first*abs(counter1);
            vec2[vec[i].second] = counter1;
            counter1--;
        } else {
            time += 2*vec[i].first*counter2;
            vec2[vec[i].second] = counter2;
            counter2++;
        }
    }

    cout << time << endl;
    for(int i =0; i<n+1; i++)
        cout << vec2[i] << " ";
    cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}