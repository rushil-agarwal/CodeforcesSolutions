#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;

    int first,last;
    for(int i =0; i<n; i++){
        if(s[i] == 'B') {
            first = i;
            break;
        }

    }
    for(int i=n-1; i>=0; i--){
        if(s[i] == 'B') {
            last = i;
            break;
        }
    }
    cout <<last-first + 1 << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}