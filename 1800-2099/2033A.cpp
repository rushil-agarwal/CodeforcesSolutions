#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >>  n;
    int turn = 1;
    int person = -1, coord = 0;
    // -1 = Sakurako
    // 1 = Kosuke

    while(abs(coord) <= n){
        coord += person * (2*turn - 1);
        turn++;
        person*=-1;
    }

    if(person == -1)
        cout << "Kosuke" << endl;
    else
        cout << "Sakurako" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}