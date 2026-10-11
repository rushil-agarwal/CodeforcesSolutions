#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> freq(n+1, 0);

    for(int i=0; i<n; i++){
        int x; cin >> x;
        freq[x]++;
    }

    for(int i = 0; i<=n; i++){
        if(freq[i] < 2*k){
            if(freq[i] == 2*k-1)
                cout << "YES\n";
            else
                cout << "NO\n";
            return;
        }
    }

    cout << "NO\n";
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