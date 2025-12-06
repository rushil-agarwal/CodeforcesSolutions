#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    int oneIdx = -1;

    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i] == 1)
            oneIdx = i;
    }

    vector<int> suffix(n);
    suffix[n-1] = vec[n-1];
    for(int i = n-2; i>=0; i--)
        suffix[i] = max(suffix[i+1], vec[i]);
    int minVal = INT_MAX;
    for(int i=0; i<n-1; i++){
        minVal = min(minVal, vec[i]);

        if(minVal > suffix[i+1]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    set<pair<int, int>> edges;

    vector<int> index;
    minVal = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(vec[i] < minVal){
            minVal = vec[i];
            index.push_back(i);
        }
    }

    for(int i = 0; i<index.size(); i++){
        
        if(i == index.size()-1){
            int u = vec[index[i]];
            int v = suffix[index[i]+1];
            edges.insert({min(u, v), max(u, v)});
        } else {
            int u = vec[index[i]];
            int v = suffix[index[i+1]];
            edges.insert({min(u, v), max(u, v)});
        }
    }

    minVal = INT_MAX;

    for(int i=0; i<n; i++){
        minVal = min(minVal, vec[i]);

        if(minVal == vec[i])
            continue;

            int u = vec[i], v = minVal;
        edges.insert({min(u, v), max(u, v)});
    }


    for(auto it: edges){
        cout << it.first << " " << it.second << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}