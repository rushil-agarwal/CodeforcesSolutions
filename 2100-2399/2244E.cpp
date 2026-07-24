#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    string str; cin >> str;
    vector<tiii> queries(q);

    for(int i=0; i<q; i++){
        int l, r, k; cin >> l >> r >> k;
        queries[i] = {l-1, r-1, k};
    }

    vector<int> pref(n, 0);

    for(int i=0; i+1<n; i++)
        pref[i+1] = pref[i] + (str[i] == str[i+1]);

    for(auto &[left, right, limit]: queries){
        int needed = (pref[right]-pref[left]+1)/2;

        if(needed <= limit) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

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