#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    int ans = 0, curr = 0, best = 0;

    str = str+str;

    for(int i=0; i<2*n; i++){
        if(str[i] == '0'){
            curr++;
            best = max(best, curr);
        } else
            curr =0;
    }

    cout << min(best, n) << endl;
    
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}