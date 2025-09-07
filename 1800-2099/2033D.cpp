#include <bits/stdc++.h>
using namespace std;

bool funct(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}

void solve(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];
    vector<pair<int, int>> vec2;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum+=vec[j];

            if(sum == 0) {
                vec2.push_back(make_pair(i, j));
                break;
            }
        }
    }
    sort(vec2.begin(), vec2.end(), funct);
    int ans=0, last = -1;
    for(int i=0; i<vec2.size(); i++){
        if(vec2[i].first > last){
            last = vec2[i].second;
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}