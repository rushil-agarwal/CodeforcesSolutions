#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string str; cin >> str;
    bool flag = true;

    vector<int> cnt(k, 0);

    for(int i=0; i<n; i++){
        if(str[i] == '1')
            cnt[i%k]++;
    }
    
    for(auto it: cnt){
        if(it&1){
            flag = false;
            break;
        }
    }


    if(flag) 
        cout << "YES\n";
    else 
        cout << "NO\n";
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