#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void adder(vector<long> &vec, int toAdd){
    for(int i=0; i<toAdd; i++)
        vec.push_back(0);
}

void solve(){
    int n; cin >> n;
    vector<long> vec(n), vec2(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
        vec2[i] = n-i;
    }
    int toAdd=0;
    line1:
    for(int i=1; i<n; i++){
        if(vec[i] == vec2[i] + toAdd){
            toAdd+=i;
            goto line1;
        }
    }

    cout << n + toAdd << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}