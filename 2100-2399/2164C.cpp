#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<long long> b(m), c(m);
    vector<pair<long long, long long>> vec;

    multiset<long long> damage;

    for(int i=0; i<n; i++){
        long long temp; cin >> temp;
        damage.insert(temp);
    }

    for(int i=0; i<m; i++)
        cin >> b[i];
    for(int i=0; i<m; i++)
        cin >> c[i];

    vector<pair<long long, long long>> vec1;
    vector<long long> vec2;

    for(int i=0; i<m; i++){
        if(c[i] == 0)
            vec2.push_back(b[i]);
        else
            vec1.push_back({b[i], c[i]});
    }

    sort(vec1.begin(), vec1.end());

    sort(vec2.begin(), vec2.end());

    int ans = 0;

    for(auto &[health, replaceWith] : vec1){
        auto it = damage.lower_bound(health);

        if(it!=damage.end()){
            long long hit = *it;
            damage.erase(it);

            ans++;

            damage.insert(max(hit, replaceWith));
        }
    }

    for(auto &health: vec2){
        auto it = damage.lower_bound(health);

        if(it != damage.end()){
            ans++;
            damage.erase(it);
        }
    }

    cout << ans << endl;



}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}