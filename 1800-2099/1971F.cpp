#include<bits/stdc++.h>
using namespace std;

void solve(){
    long double x; cin >> x;
    int points = 0;

    for(int i=1; i< x+1; i++){
        for(int j = 1; j<x+1; j++){
            if(sqrt(i*i + j*j) < x+1 && sqrt(i*i + j*j) >= x)
                points++;
        }
    }
    cout << points*4 + 4 << endl;

}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}