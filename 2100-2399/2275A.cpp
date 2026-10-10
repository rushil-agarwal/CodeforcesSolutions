#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int x, y, r; cin >> x >> y >> r;

    for(int i = -r; i<=r; i++){
        for(int j=-r; j<=r; j++){
            if(i*i + j*j <= r*r){
                cout << x+i << " " << y+j << "\n";
                return;
            }
        }
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