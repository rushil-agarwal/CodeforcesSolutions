#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int cnt = 0, n = s.length();
    char prev = 's';
    for(int i=0; i<n; i++){
        if(i == 0){
            cnt += (s[i] != 's');
            prev = 's';
            continue;
        } else if(i == n-1){
            cnt += (s[i] != 's');
            continue;
        }

        if(s[i] == 's')
            prev = 's';
        else {
            if(prev == 'u'){
                cnt++;
                prev = 's';
            } else 
                prev = 'u';
        }
    }

    cout << cnt << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}