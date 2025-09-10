#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, j, k; cin >> n >> j >> k;
    vector<int> vec(n);

    int maxVal=-1;
    for(int i=0; i<n; i++) {
        cin >> vec[i];
        maxVal = max(maxVal, vec[i]);
    }

    if(k > 1)
        cout << "YES" << endl;
    else{
        if(maxVal == vec[j-1])
            cout << "YES" << endl;
        else
                cout << "NO" << endl;
    }



}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}