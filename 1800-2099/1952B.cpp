#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == 'i' && s[i+1] == 't'){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}