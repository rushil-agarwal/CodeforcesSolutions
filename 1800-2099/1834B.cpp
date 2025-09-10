#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string a,b;
    cin >> a >> b;
    ll temp,ans;
    if(a == b){
        cout << "0" << endl;
        return;
    } else {
        while(a.size() < b.size()){
            a = '0' + a;
        }
        for(int i=0;i<b.size();i++){
            if(a[i] != b[i]){
                temp = i;
                break;
            }
        }
        ans = b[temp] - a[temp];
        for(int i = i+1;i<a.size();i++){
            ans+=9;
        }

        cout << ans << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}