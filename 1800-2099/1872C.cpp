#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    ll a,b;
    cin >> a >> b;
    if(a == b){


    } else {
        for(int i=0; i<b-a; i++){
            if(a%2 == 0){
                cout << a/2 << " " << a/2 << endl;
            } else {
                a++;
            }
        }
    }

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}