#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s.size() == 2 && s[0] == '(' && s[1] == ')'){
        cout << "NO" << endl;
        return;
    }
    int temp=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ')' && s[i+1] == '(')
            temp=1;
    }
    cout << "YES" << endl;
    if(temp){
        for(int i=0; i<s.size();i++)
            cout << "(";
        for(int i=0; i<s.size(); i++)
            cout << ")";
    } else {
        for(int i=0; i<s.length(); i++){
            if(s[i] == ')')
                cout << "(" << s[i];
            else
                cout << s[i] << ")";
        }
    }
    cout << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}