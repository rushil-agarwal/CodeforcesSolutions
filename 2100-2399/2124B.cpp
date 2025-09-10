#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i=0; i<n; i++)
        cin >> vec[i];

    int ans = INT_MAX;
    //first pair
    ans = min(ans, vec[0] + vec[1]);

    ans = min(ans, vec[0] + min(vec[0], vec[1]));

    if(!vec[0])
        cout << 0 << endl;
    else
        cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}//
// Created by Lenovo on 06-07-2025.
//
