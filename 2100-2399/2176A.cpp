#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    vector<bool> used(n, false);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    int ans = 0;

    for(int i = n-1; i>=0; i--){
        int base = vec[i];
        for(int j = i+1; j<n; j++){
            if(vec[j] < base && !used[j]){
                ans++;
                used[j] = true;
            }
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