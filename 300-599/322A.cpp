#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(ll b,ll g){
    if(!(b>=1 && g>=1)) {
        cout << "0" << endl;
        return;
    }
    ll dances = b+g-1;
    cout << dances << endl;

    /*all girls dance with first boy*/
    for(int i=1;i<=g;i++){
        cout << "1 " << i << endl;
    }

    /*all boys(2+) dance with first girl*/
    for(int i=2;i<=b;i++){
        cout << i << " 1" << endl;
    }
    return;
}

int main(){
    ll b,g;
    cin >> b >> g;
    solve(b,g);
    return 0;
}
