#include<iostream>
#define ll long long int
using namespace std;

void solve() {
    ll n;
    cin >> n;
    if(n==1){
        cout << 0 << endl;
        return;
    }

    int steps=0;
    while(n!=1){
    steps++;
    if(n%2==0)
        n=n/2;
    else if(n%3==0)
        n=2*n/3;
    else if(n%5==0)
        n=4*n/5;
    else{
        cout << "-1" <<endl;
        return;
    }

    }
    cout << steps << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
}