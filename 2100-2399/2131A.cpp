#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
        cin >> b[i];

    int ans=0;
    for(int i=0; i<n; i++){
        if(a[i] > b[i])
            ans += (a[i]-b[i]);
    }

    cout << ans+1 << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}