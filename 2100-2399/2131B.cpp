#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> ans(n);

    for(int i=0; i<n; i++){
        if(i&1){
            if( (n&1) == 0 && i == n-1){
                ans[i] = 2;
            } else {
                ans[i] = 3;
            }
        } else {
            ans[i] = -1;
        }
    }

    for(auto &it: ans)
        cout << it << " ";
    cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}