#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n; cin >> n;
    char arr[]= {'a','e','i','o','u'};
    int cnt=0;
    string ans;
    ans = "";
    while(n!=0){
        for(int i=0; i<ceil(n/(5-cnt)); i++){
            ans += arr[cnt%5];
        }
        n-=ceil(n/(5-cnt));
        cnt++;
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
