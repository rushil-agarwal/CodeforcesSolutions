#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "1" << endl;
    } else if(n == 2){
        cout << "1 2" << endl;
    } else {
        if(n*(n+1)/2 % n == 0){
            cout << "-1" << endl;
        } else {
            for(int i=0; i<n; i++){
                if(i%2 == 0)
                    cout << i+2 << " ";
                else
                    cout << i << " ";
            } cout << endl;
        }
    }
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}