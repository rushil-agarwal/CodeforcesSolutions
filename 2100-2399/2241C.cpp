#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    bool flag1 = false, flag2 = false;
    
    for(int i=1; i<n; i++){
        if(str[i] == '1' && str[i-1] == '0')
            flag1 = true;
        else if(str[i] == '0' && str[i-1] == '1')
            flag2 = true;
    }

    if((flag1 && !flag2) || (!flag1 && flag2))
        cout << "2\n";
    else
        cout << "1\n";
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