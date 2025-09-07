#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int operations=0;
    int unique=0;
    int repetitions=0;
    sort(s.begin(),s.end());
    cout << s << endl;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            i++;
            unique++;
            repetitions++;
        } else {
            unique++;
        }
    }
    operations+=unique;
    if(operations==n){
        cout << "NO" << endl;
        return;
    }

}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
}