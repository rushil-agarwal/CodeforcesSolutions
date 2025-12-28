#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string str;
    cin >> str;
    
    int cnt = 0;
    for(auto ch: str)
        cnt += (ch == 'Y');

    if(cnt >= 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;


}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

