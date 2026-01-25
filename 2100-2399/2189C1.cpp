#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n+1);
    vec[n] = 1;

    for(int i=2; i<n; i++)
        vec[i] = (i^1);

    if(n&1)
        vec[1] = n-1;
    else
        vec[1] = n;


    for(int i=1; i<=n; i++)
        cout << vec[i]<< ' ';
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
