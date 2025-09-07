#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int temp;
    unordered_map<int, int> map;
    for(int i=0; i<n; i++) {
        cin >> temp;
        map[temp]++;
    }
    if(map.size() == n){
        cout << max(1, n-k) << endl;
        return;
    }

    priority_queue<int, vector<int>, greater<int>> q;

    for(auto it: map){
        q.push(it.second);
    }

    while(k>0 && q.size()>1){
        if(q.top() <= k){
            k-=q.top();
            q.pop();
        } else {
            break;
        }
    }
    cout << q.size() << endl;


}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}