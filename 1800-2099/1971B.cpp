#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin >> s;

    unordered_set<char> letters;
    for(char i : s){
        letters.insert(i);
    }

    if(letters.size() == 1){
        cout << "NO" << endl;
    } else {
        int i1,i2;
        i1=0;
        for(int i=1; i<s.length(); i++){
            if(s[i] != s[i1]){
                i2 = i;
                break;
            }
        }
        swap(s[i1], s[i2]);
        cout << "YES" << endl << s << endl;
    }







}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
