#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    string s,t;
    cin >> s >> t;

    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i] == t[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}