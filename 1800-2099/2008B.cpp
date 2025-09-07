#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n; cin >> n;
    string str; cin >> str;

    int first=-1, last = -1, index=-1;
    for(int i=0; i<n; i++){
        if(str[i] == '0') {
            first = i;
            index = i;
            break;
        }
    }
    if(first!=-1) {
        for (int i = index; i < n - 1; i++) {
            if (str[i + 1] == '1') {
                last = i;
                break;
            }
        }
    }
    if(first == -1){
        int sqr = sqrt(n);
        if(sqr * sqr == n){
            if(n>4){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    } else {
        int length = last - first +1+2;
        if(n != length*length){
            cout << "NO" << endl;
            return;
        } else {
            cout << "YES" << endl;
            return;
        }
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}