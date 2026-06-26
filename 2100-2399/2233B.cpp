#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;

    if(n == 2){
        cout << "1 2 1 1 2 2 1 2\n";
        return;
    } else if(n == 3){
        cout << "1 1 2 1 2 3 1 3 2 2 3 3\n";
        return;
    }

    for(int i=1; i<=n; i++)
        cout << i << " ";
    for(int i=1; i<=n; i++)
        cout << i << " ";

    for(int i = 2; i<=n; i++)
        cout << i << " ";
    cout << 1 << " ";

    for(int i = 4; i<=n; i++)
        cout << i << " ";

    cout << "1 2 3\n";
    
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