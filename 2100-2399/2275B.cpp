#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; string s; cin >> n >> s;

    stack<int> stk; 
    vector<bool> printed(n+1, false);

    for(int i=1; i<=n; i++){
        if(s[i-1] == '1')
            stk.push(i);
        else if(s[i-1] == '2'){
            if(stk.size()){
                int temp = stk.top(); stk.pop();
                printed[temp] = true;

            } else 
                printed[i] = true;
        } else {
            printed[i ] = true; 
        }
        
    }

    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(!printed[i])
            ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for(auto it: ans)
        cout << it << " ";

    cout << '\n';
    
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