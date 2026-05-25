#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    int zero=0, one=0, two=0;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        if(temp == 0)
            zero++;
        else if(temp == 1)
            one++;
        else
            two++;
    }

    int ans = 0;
    ans += zero;
    int temp = min(one, two);

    ans += temp;

    one -= temp;
    two -= temp;

    ans += two/3;

    ans += one/3;

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}