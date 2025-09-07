#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];

    int ans=INT_MAX;
    stack<int> currMax; currMax.push(vec[0]);

    for(int i=0; i<n; i++){
        int toDelete = i; //kitne delete karne padenge already, for this one to work
        for(int j = i+1; j < vec.size(); j++){
            if(vec[j] > vec[i])
                toDelete++; //kitne stalin ko dikkat de sakte hai, to hata do
        }
        ans = min(ans, toDelete);
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