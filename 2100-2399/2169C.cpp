#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n+1);

    for(int i = 1; i<=n; i++)
        cin >> vec[i];

    vector<int> prefix(n+2, 0);

    for(int i = 1; i<=n; i++){
        prefix[i] = prefix[i-1] + vec[i];
    }

    ll prevBest=0, ans = 0;
    
    for(int i=1; i<=n; i++){
        prevBest = max(prevBest, prefix[i-1] + i - 1LL*i*i);
        ll temp = 1LL*i*i + i - prefix[i];

        ans = max(ans, temp + prevBest);
    }

    cout << accumulate(vec.begin(), vec.end(), 0) + ans << endl;

    


}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}