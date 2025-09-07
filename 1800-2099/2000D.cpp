#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int temp = 2e5 + 5;
int arr[temp];
char str[temp];
ll cost[temp];

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    for(int i = 1; i <= n; i++)
        cin >> str[i];

    for(int i = 1; i <= n; i++)
        cost[i] = cost[i - 1] + arr[i];

    int cntR = n;
    ll ans = 0;

    for(int i = 1; i <= n; i++) {
        if(str[i] == 'L') {
            while (cntR > i && str[cntR] != 'R'){
                cntR--;
            }

            if(cntR>i) {
                ans += cost[cntR] - cost[i-1];
                cntR--;
            }
        }
    }


    cout << ans << endl;

}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}