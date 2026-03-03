#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];

    bool flag = false;

    for(int i=1; i<n; i++){
        if(vec[i] < vec[i-1]){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "1\n";
    else
        cout << n << "\n";
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