#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string changeR(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'L')
            s[i] = 'R';
        else if(s[i] == 'R')
            s[i] = 'L';
    }

    return s;
}

string changeU(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'U')
            s[i] = 'D';
        else if(s[i] == 'D')
            s[i] = 'U';
    }

    return s;
}

void solve(){
    ll n,k,w,h; cin >> n >> k >> w >> h;
    string s; cin >> s;
    ll ans=0;ll x=0, y=0;
    for(ll i=0; i<k; i++){

        for(int j=0; j<s.length(); j++){

            if(s[j] == 'L'){
                if(x-1<0){
                    s = changeR(s);
                    x++;
                } else {
                    x--;
                }
            } else if(s[j] == 'R'){
                if(x+1 > w){
                    s = changeR(s);
                    x--;
                } else {
                    x++;
                }
            } else if(s[j] == 'U'){
                if(y+1 > h){
                    s = changeU(s);
                    y--;
                } else {
                    y++;
                }
            } else {
                if(y-1<0){
                    s = changeU(s);
                    y++;
                } else {
                    y--;
                }

            }

            if(x==0 && y==0)
                ans++;
        }
    }
    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}