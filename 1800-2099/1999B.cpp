#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int a,b,c,d; cin >> a >> b >> c >> d;
    int ans=0;
    vector<vector<int>> vec = {{a,c,b,d}, {a,d,b,c}, {b,c,a,d}, {b,d,a,c}};
    for(auto round:vec){
        int suneet=0, slavic=0;
        if(round[0] > round[1])
            suneet++;
        else if(round[1] > round[0])
            slavic++;

        if(round[2] > round[3])
            suneet++;
        else if(round[2] < round[3])
            slavic++;

        if(suneet > slavic)
            ans++;
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