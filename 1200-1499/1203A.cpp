#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (i + 1 < n) {
            if (!((arr[i] == 1 || arr[i] == n) && (arr[i + 1] == 1 || arr[i + 1] == 5 || abs(arr[i+1] - arr[i]) == 1))) {
                return 0;
            } else {
                if (!(abs(arr[i + 1] - arr[i]) == 1)) {
                    return 0;
                }
            }
        }

        if (i - 1 > 0) {
            if (!((arr[i] == 1 || arr[i] == n) && (arr[i - 1] == 1 || arr[i + 1] == 5 || abs(arr[i-1] - arr[i]) == 1))) {
                return 0;
            } else {
                if (!(abs(arr[i - 1] - arr[i]) == 1))
                    return 0;
            }

        }

    }
    return 1;
}

int main(){
    ll t;
    cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}