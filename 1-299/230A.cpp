#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    ll s,n;
    cin >> s >> n;
    vector<pair<ll,ll>> vec1;
    for(int i=0;i<n;i++){
        ll a,b;
        cin >> a >>b;
        vec1.push_back(make_pair(a,b));
    }

    sort(vec1.begin(), vec1.end());

    for(int i=0;i<n;i++){
        if(s>vec1[i].first){
            s+=vec1[i].second;
        } else {
            return 0;
        }
    }
    return 1;
}

int main(){
    if(solve()) cout << "YES" << endl;
    else cout << "NO" <<endl;

    return 0;
}