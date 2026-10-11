#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    int maxLim = 1;

    while(maxLim <= n){
        maxLim <<= 1;
    }

    cout << 2*maxLim-1 << endl;
    vector<int> ans;

    for(int i=1; i<maxLim; i++)
        ans.push_back(i&(-i));

    for(auto it: ans)
        cout << it << " ";
    cout << maxLim/2 << " ";
    for(auto it: ans)
        cout << it << " ";
    cout << endl;
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