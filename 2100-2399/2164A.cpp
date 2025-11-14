#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long x;
    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> x;

    bool less = false, more = false, equal = false;

    for(auto &it: nums){
        if(it > x)
            more = true;
        else if(it < x)
            less = true;
        else
            equal = true;
    }

    if(equal || (less && more))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}