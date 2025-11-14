#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (auto &it : arr)
        cin >> it;

    vector<long long> even, odd;
    for (auto &it : arr) {
        if (it & 1)
            odd.push_back(it);
        else
            even.push_back(it);
    }

    if (n == 1) {
        cout << -1 << endl;
        return;
    }

    long long first = -1, second = -1;
    bool flag = false;

    if (even.size() >= 2) {
        first = even[0];
        second = even[1];
        flag = true;
    }

    if (!flag && even.size() == 1) {
        long long temp = even[0];
        for (auto &it : odd) {
            if (temp < it) {
                if (((it % temp) & 1) == 0) {
                    first = temp;
                    second = it;
                    flag = true;
                    break;
                }
            } else {
                if (((temp % it) & 1) == 0) {
                    first = it;
                    second = temp;
                    flag = true;
                    break;
                }
            }
        }
    }

    if (!flag && odd.size() >= 2) {
        for (int i = 0; i < odd.size(); i++) {
            long long temp = odd[i];
            for (int j = i + 1; j < odd.size(); j++) {
                long long rem = odd[j] % temp;
                if ((rem & 1) == 0) {
                    first = temp;
                    second = odd[j];
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }

    if (flag)
        cout << first << " " << second << endl;
    else
        cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
