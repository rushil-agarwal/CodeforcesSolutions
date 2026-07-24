#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> books(n);

    for(int i=0; i<n; i++)
        cin >> books[i];

    int extra = 0;

    for(int i=0; i<n; i++){
        if(books[i] >= i+1){
            extra += books[i] - (i+1);
        } else {
            if(extra >= (i+1) - books[i]){
                extra -= (i+1) - books[i];
            } else {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}