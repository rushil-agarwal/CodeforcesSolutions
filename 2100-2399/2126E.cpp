#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    bool flag = true;
    for (int i = 1; i < n; i++) {
        if (vec1[i-1] % vec1[i] != 0) {
            flag = false;
            break;
        }
    }
    for (int i = 1; i < n; i++) {
        if (vec2[i] % vec2[i-1] != 0) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << "No" << endl;
        return;
    }

    vector<ll> comp(n);
    for (int i = 0; i < n; i++) {
        ll GCD = gcd(vec1[i], vec2[i]);
        comp[i] = (vec1[i] /GCD) * vec2[i];
    }

    ll cur = comp[0];

    //match agar prefix and suffix matched
    if (cur != vec1[0])
        flag = false;


    for (int i = 1; i < n; i++) {
        cur = gcd(cur, comp[i]);
        if (cur != vec1[i]) {
            flag = false;
            break;
        }
    }
    cur = comp[n-1];


    if (cur != vec2[n-1])
        flag = false;

    for (int i = n-2; i >= 0; i--) {
        cur = gcd(comp[i], cur);
        if (cur != vec2[i]) {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
            cout << "NO" << endl;;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}