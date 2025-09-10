#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string str; cin >> str;
    int one=0, zero=0;
    for(char &ch: str){
        if(ch == '1')
            one++;
    }
    //alice - 0
    //bob - 1

    if(one <= k){
        cout << "Alice" << endl;
    } else {
        bool flag = false;
        for(char &ch: str){
            if(ch == '0')
                zero++;
            else {
                zero=0;
            }

            if(zero >= k){
                flag = true;
            }
        }

        if(flag){
            cout << "Bob" << endl;
        } else if(k*2 <= n)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    //if atleast k concecutive eroes, bob wins
     //001111

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}