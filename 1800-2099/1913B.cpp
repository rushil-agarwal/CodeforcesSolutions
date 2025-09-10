#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin >> s;
    int cnt0=0;int cnt1=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    if(cnt0 == cnt1){
        cout << "0" << endl;
        return;
    }
    int len=0;
    int i=0;
    while(cnt1>=1 || cnt0>=1){
        if(s[i] == '0') {
            if(cnt1==0)
                break;
            cnt1--;
            len++;
        }
        else {
            if(cnt0 == 0)
                break;
            cnt0--;
            len++;
        }

        i++;
    }
    int ans = (len - s.size());
    cout << abs(ans) << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}