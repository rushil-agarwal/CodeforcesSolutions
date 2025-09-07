#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    int n;
    cin >> n;
    if(n%2 == 1){
        cout << "NO" << endl;
        return;
    }
    char c = 'A';
    cout << "YES" << endl;
    for(int i=0; i<n/2;i++){
        cout << c << c;
        c++;
    }cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}