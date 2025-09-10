#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    for(int i=0; i<n; i++){
        cout << n - vec[i] + 1 << " ";
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