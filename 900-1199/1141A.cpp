#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll x, ll y){
    ll z;
    if(x == y){
        return 0;
    }
    if(y%x != 0){
        return -1;
    } else {
        z = y/x;
    }if(x == 1){
        if(!(y%2 == 0 || y %3 == 0))
            return -1;
    }
    ll two=0; ll three=0;
    while(z%2 == 0){
        z/=2;
        two++;
    }
    while(z%3 == 0){
        z/=3;
        three++;
    }
    if(z!=1)
        return -1;
    return two+three;


}

int main(){
    ll x,y;
    cin >> x >> y;
    cout << solve(x,y) << endl;
    return 0;
}