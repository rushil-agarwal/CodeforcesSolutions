#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> vec1;
    for(int i=0;i<n;i++){
        ll a,b;
        cin >> a >> b;
        if(a>b)
            swap(a,b);
        vec1.push_back(make_pair(a,b));
    }
    int ans = 1;
    for(int i=0;i<n-1;i++){
        if(vec1[i].second<vec1[i+1].second)
            swap(vec1[i+1].first,vec1[i+1].second);

        if(vec1[i].second < vec1[i+1].second){
            ans=0;
            break;
        }
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}