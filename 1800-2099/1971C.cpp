#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x,y;

    if((c>a && c<b) || (c<a && c>b))
        x = 1;
    else
        x = 0;

    if((d>a && d<b) || (d<a && d>b))
        y = 1;
    else
        y = 0;

    if(y == x){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }


}

int main(){

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}