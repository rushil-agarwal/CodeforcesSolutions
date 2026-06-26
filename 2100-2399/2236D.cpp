#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    map<int, int> hash;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        hash[temp]++;
    }

    vector<pii> vec;

    for(auto it: hash)
        vec.push_back({it.first, it.second});

    int aheadFreq = 0;

    for(int i = vec.size()-1; i>=0; i--){
        if(aheadFreq&1){
            cout << "YES\n";
            return;
        } else if((aheadFreq + vec[i].second-1)&1){
            cout << "YES\n";
            return;
        }

        if(i>0){
            if(vec[i].first - vec[i-1].first > k)
                aheadFreq = 0;
            else
                aheadFreq += vec[i].second;
        }
    }

    cout << "NO\n";
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