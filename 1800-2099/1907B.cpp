#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void func(string s){
    for(int i = s.size()-1; i>=0; i--){
        cout << s[i];
    } cout << endl;
}

void solve(){
    string s,ans="";
    cin>>s;
    int small=0, capital=0;
    for(int i=s.size()-1; i>=0; i--){
        char c=s[i];
        if(islower(c))
        {
            if(c=='b')
                small++;
            else if(small)
                small--;
            else
                ans+=c;
        }
        else
        {
            if(c=='B')
                capital++;
            else if(capital)
                capital--;
            else
                ans+=c;
        }
    }
    func(ans);
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}