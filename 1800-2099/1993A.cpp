#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    vector<int> vec(4,0);
    for(auto c:s){
        if(c == 'A')
            vec[0]++;
        else if(c == 'B')
            vec[1]++;
        else if(c == 'C')
            vec[2]++;
        else if(c=='D')
            vec[3]++;
    }

    sort(vec.begin(), vec.end());
    int ans=0;

    for(int i=3; i>=0; i--){
        ans+=min(n,vec[i]);
    }

    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}