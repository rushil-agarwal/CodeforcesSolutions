#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    vector<long> coords(n), queries(q);
    for(int i=0; i<n; i++){
        cin >> coords[i];
    }

    for(int i=0; i<q; i++)
        cin >> queries[i];

    sort(coords.begin(), coords.end());

    for(auto q: queries){
        long ans=0;
        if(q > n*(n-1)/2){
            cout << "0" << endl;
            continue;
        }


    }
}

int main(){
    int t; cin>> t;
    while(t--)
        solve();
}