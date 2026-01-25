#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    vector<pii> queries(q);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    for(int i=0; i<q; i++){
        cin >> queries[i].first >> queries[i].second;
        queries[i].first--;
        queries[i].second--;
    }

    vector<int> best(n, 0);

    best[n-1] = max(a[n-1], b[n-1]);

    for(int i = n-2; i>=0; i--){
        best[i] = max(a[i], max(best[i+1], b[i]));
    }

    vector<int> prefix(n+1, 0);
    for(int i=0; i<n; i++){
        prefix[i+1] = prefix[i] + best[i];
    }

    for(auto &[left, right]: queries){
        cout << prefix[right+1] - prefix[left] << ' ';
    }

    cout << '\n';


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