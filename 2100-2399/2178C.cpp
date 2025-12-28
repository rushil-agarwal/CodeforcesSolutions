#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    vector<long long> suffix(n+1, 0);


    for(int i = n-1; i>=0; i--)
        suffix[i] = suffix[i+1] + vec[i];

    // cout << "###########" << endl;
    // for(auto it: suffix)
    //     cout << it << " ";
    // cout << endl;

    long long ans = LLONG_MIN;
    long long left =0;

    for(int i=0; i<n; i++){
        ans = max(ans, left - suffix[i+1]);

        if(i == 0)
            left += vec[i];
        else
            left += llabs(vec[i]);
    }



    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}


// vec = 0 2 -3
// dp  = 0 2 5
// suffix = 








