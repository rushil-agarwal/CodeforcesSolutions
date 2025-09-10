#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    ll n, k; cin >> n >> k;
    vector<ll> set1(n), set2(n);

    for(int i=0; i<n; i++){
        cin >> set1[i];
        set1[i]%=k;

        if(set1[i] != 0){
            set1[i] = min(set1[i], k - set1[i]);
        }
    }


    for(int i=0; i<n; i++){
        cin >> set2[i];
        set2[i]%=k;

        if(set2[i] != 0){
            set2[i] = min(set2[i], k - set2[i]);
        }
    }

    sort(set1.begin(), set1.end());
    sort(set2.begin(), set2.end());

    for(int i=0; i<n; i++){
        if(set1[i] != set2[i])
            return false;
    }

    return true;


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