#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;

    ll minDmg = LLONG_MAX, maxDmg = LLONG_MIN;
    vector<ll> hits(n);
    vector<pair<ll, int>> swords;
    map<ll, int> freq;

    for(int i=0; i<n; i++){
        ll temp; cin >> temp;
        freq[temp]++;
    }

    for(int i=0; i<n; i++){
        cin >> hits[i];
    }

    for(auto it: freq){
        swords.push_back({it.first, it.second});
    }

    // sort(swords.begin(), swords.end());

    ll maxScore = 0, totalHits=0;;
    int m = swords.size();
    int swordIdx = m-1;
    int totalSwords=0;

    for(int i=0; i<n; i++){
        totalHits += hits[i];

        while(swordIdx >= 0 && totalHits > totalSwords){
            totalSwords += swords[swordIdx].second;
            swordIdx--;
        }

        if(totalSwords < totalHits)
            break;

        ll score = 1LL*(i+1)*(swords[swordIdx+1].first);

        maxScore = max(maxScore, score);
    }

    cout << maxScore << '\n';
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