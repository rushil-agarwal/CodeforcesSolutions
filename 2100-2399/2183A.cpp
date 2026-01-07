#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    if(!arr[0] && !arr[n-1])
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}