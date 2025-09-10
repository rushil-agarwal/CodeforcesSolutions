#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct casino {
    ll left, real, right;
};

bool funct(casino &a, casino &b){
    return a.left < b.left
;}

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<casino> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i].left >> vec[i].right >> vec[i].real;
    }

    sort(vec.begin(), vec.end(), funct);

    for(int i=0; i<n; i++){
        if(vec[i].left <= k){
            k = max(k, vec[i].real);
        }
    }

    cout << k << endl;


}

int main() {

    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
