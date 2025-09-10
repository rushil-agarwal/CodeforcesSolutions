#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    int n; cin >> n;

    if(n%4 == 0)
        return false;
    return true;
}

int main() {

    ll t;
    cin >> t;
    while (t--) {
        if (solve())
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
