#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n; cin >> n;

    if((int)n%2){
        for(int i=0; i<n/2-1; i++){
            cout << i+1 << " " << n-i << " ";
        }
        cout << ceil(n/2);

    } else {
        for (int i = 0; i < n / 2; i++) {
            cout << i + 1 << " " << n - i << " ";
        }
    }
//    if((int)n%2)
//        cout << ceil(n/2);
    cout << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}