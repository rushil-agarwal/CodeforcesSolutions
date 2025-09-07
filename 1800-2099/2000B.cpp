#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool ans = true;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        temp--;
        vec[temp] = 1;
        if (i == 0)
            continue;
        else {
            if (temp == 0) {
                if (vec[1] == 0)
                    ans = false;
            } else if (temp == n - 1) {
                if (vec[n - 2] == 0)
                    ans = false;
            } else {
                if (vec[temp - 1] == 0 && vec[temp + 1] == 0)
                    ans = false;
            }
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}