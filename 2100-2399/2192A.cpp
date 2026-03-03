#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;

    int cnt=0, maxCnt = 0;
    int currLen=1, maxLen=0;

    for(int i=0; i<n; i++){
        cnt += (str[i] != str[(i+1)%n]);
    }

    if(cnt == 0)
        cout << "1\n";
    else if(cnt == n)
        cout << cnt << '\n';
    else
        cout << cnt+1 << '\n';


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