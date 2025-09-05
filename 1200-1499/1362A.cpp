#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b,x=0,y=0;
    cin >> a >> b;
    while(a%2==0){
        a/=2;
        x++;
    }
    while(b%2==0){
        b/=2;
        y++;
    }
    float diff = abs(x-y);
    if(a==b)
        cout << ceil(diff/3) << endl;
    else
        cout << "-1" << endl;

}


int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}