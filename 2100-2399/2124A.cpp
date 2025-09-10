#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n), sorted(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
        sorted[i] = vec[i];
    }

    sort(sorted.begin(), sorted.end());

    vector<int> ans;
    for(int i=0; i<n; i++){
        if(vec[i] != sorted[i])
            ans.push_back(vec[i]);
    }

    if(ans.empty()){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl << ans.size() << endl;
        for(auto &it: ans)
            cout << it << " ";
        cout << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}