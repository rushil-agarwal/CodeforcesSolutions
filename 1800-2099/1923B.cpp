#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,k; cin >> n >> k;

    ll health[n], step[n];
    for(int i=0; i<n; i++)
        cin >> health[i];
    for(int i=0; i<n; i++) {
        ll temp;
        cin >> temp;
        step[i] = abs(temp);
    }

    ll position[n+1];
    for(int i=1; i<=n; i++)
        position[i] = 0;
    for(int i=0; i<n; i++){
        position[step[i]] += health[i];
    //    cout << "At step " << step[i] << " health is: " << position[i] << endl;
    }

    bool ans = true;
    ll left=0;

    for(int i=1; i<=n; i++){
        left += k - position[i];

        if(left < 0) {
            ans = false;
        //    cout << "LEFT:  " << left << endl;
        }
    }

    if(ans)
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