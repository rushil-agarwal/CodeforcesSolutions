#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int x, y; cin >> x >> y;


    if(y <= x && ((x-y)&1) == 0)
        cout << x << '\n';
    else if( y <= x+1)
        cout << x+1 << '\n';
    else
        cout << -1 << endl;
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