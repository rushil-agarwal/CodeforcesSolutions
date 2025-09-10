#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if(x1 == x2) {
        cout << (y1 - y2) * (y1 - y2) << endl;
    } else if(x1 == x3) {
        cout << (y1-y3)*(y1-y3) << endl;
    } else {
        cout << (y1-y4) * (y1-y4) << endl;
    }

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}