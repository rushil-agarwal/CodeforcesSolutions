#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int a = 0, m = 0;
    vector<int> aji(n+1), mai(n+1);

    for(int i = 1; i<= n; i++){
        cin >> aji[i];

        a ^= aji[i];
    }
    for(int i = 1; i<= n; i++){
        cin >> mai[i];

        m ^= mai[i];
    }
    if(a == m){
        cout << "Tie" << endl;
        return;
    }


    int lastIdx = -1;

    for(int i= 1; i<=n; i++){
        if(aji[i] != mai[i]){
            lastIdx = i;
        }   
    }

    if(lastIdx == -1){
        cout << "Tie" << endl;
    } else if(lastIdx & 1){
        cout << "Ajisai" << endl;
    } else {
        cout << "Mai" << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}