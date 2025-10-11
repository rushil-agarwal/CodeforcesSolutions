#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    set<int> store;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        store.insert(temp);
    }

    cout << store.size() << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}