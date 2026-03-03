#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    stack<char> stk;
    string str; cin >> str;

    for(int i=0; i<n; i++){
        if(!stk.empty() && stk.top() == str[i])
            stk.pop();
        else
            stk.push(str[i]);
    }

    if(stk.empty()){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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