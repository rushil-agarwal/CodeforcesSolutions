#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    double x,y;
    cin >> x >> y;
    int screen = 0;
    screen += ceil(y/2);
    //cout << "screens for 2x2 icon: " << screen << endl;
    int empty = 15*screen - y*4;
    if(x > empty) {
        screen += ceil((x-empty)/15);
    }
    cout << screen  << endl;


}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}