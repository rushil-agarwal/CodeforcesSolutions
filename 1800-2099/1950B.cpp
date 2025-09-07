#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i%2 == 0) {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "##";
                else
                    cout << "..";
            }
            cout << endl;
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "##";
                else
                    cout << "..";
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "..";
                else
                    cout << "##";
            }
            cout << endl;
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    cout << "..";
                else
                    cout << "##";
            }
        }
    cout << endl;}
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}