#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<int> &freqA, vector<int> &freqB){
    for(int i = 0; i < 26; i++){
        if(freqA[i] != freqB[i])
            return false;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    string a, b;

    cin >> a >> b;

    vector<int> freqA(26, 0), freqB(26, 0);

    for(auto &ch: a)
        freqA[ch - 'a']++;

    for(auto &ch: b)
        freqB[ch - 'a']++;

    if(check(freqA, freqB))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}