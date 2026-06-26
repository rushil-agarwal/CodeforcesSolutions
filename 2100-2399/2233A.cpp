#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, x, y ,z;
    cin >> n >> x >> y >> z;

    if(z*x > n){
        cout << ceil(n*1.0/(x+y)) << '\n';
        return;
    }

    cout << min(ceil(n*1.0/(x+y)), z + ceil((n-z*x)*1.0/(x+10*y))) << '\n';
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