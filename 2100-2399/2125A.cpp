#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s; cin >> s;
    string ans = "", t="", f="", n="";

    for(char &ch: s){
        if( ch == 'F')
            f+=ch;
        else if(ch == 'N')
            n+=ch;
        else if(ch == 'T')
            t+=ch;
        else
            ans+=ch;
    }

    cout << t << ans << f << n << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}