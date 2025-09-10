#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<char> vec(3,'a');

    int z = 3;
    if(3<=n && n<= 28){
        n-=2;
        vec[2] = 'a' + n-1;
    } else if(29<=n && n<=53){
        vec[2] = 'z';
        vec[1] = 'a' + (n-27)-1;
    } else {
        vec[1] = 'z';
        vec[2] = 'z';
        vec[0] = 'a' + (n-52)-1;

    }

    cout << vec[0] << vec[1] << vec[2] << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}