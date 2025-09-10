#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++){
        for(char j = 'a'; j < 'a' + k ;j++){
            cout << j;
        }
    }
    cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}