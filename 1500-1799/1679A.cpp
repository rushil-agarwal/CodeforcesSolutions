#include<iostream>
using namespace std;

void solve(){
    long long int n;
    cin >> n;
    if(n%2 == 1 || n<=2){cout << "-1" << endl;return;}

    n=n/2;
    cout << (n+2)/3 << " " << n/2 << endl;

 }

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}