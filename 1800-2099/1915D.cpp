#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >>  n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){

        if(s[i] == 'a' || s[i] == 'e'){
            if(i == n-1)
                cout << s[i-1] << s[i] << endl;
            else if(i == n-2)
                cout << s[i-1] << s[i] << s[i+1] << endl;
             else {
                if (s[i + 2] == 'b' || s[i + 2] == 'c' || s[i + 2] == 'd') {
                    cout << s[i - 1] << s[i] << s[i + 1] << ".";
                } else {
                    cout << s[i - 1] << s[i] << ".";
                }
            }
        }
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}