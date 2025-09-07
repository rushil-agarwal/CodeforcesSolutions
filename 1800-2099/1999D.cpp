#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string og, tar; cin >> og >> tar;
    int cnt=0;

    for(int i=0; i<og.size(); i++){
        if(cnt >=tar.size())
            break;
        if(og[i] == tar[cnt]){
            cnt++;
        } else if(og[i] == '?'){
            og[i] = tar[cnt];
            cnt++;
        }
    }

    for(int i=0;i <og.size(); i++){
        if(og[i] == '?')
            og[i] = 'a';
    }

    if(cnt==tar.size()){
        cout << "YES" << endl;
        cout << og << endl;
        return;
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