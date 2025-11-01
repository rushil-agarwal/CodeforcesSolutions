#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    vector<long long> vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    for(auto &p: primes){
        for(auto &num: vec){
            if(gcd(num, p) == 1){
                cout << p << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main(){

    long t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}