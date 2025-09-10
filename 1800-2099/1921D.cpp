#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool func1(const ll &a, const ll &b){
    return b < a;
}

void solve(){
    int n,m;
    cin >> n >> m;
    vector<ll> vec1(n), vec2(m);
    for(int i=0; i <n ;i++)
        cin >> vec1[i];
    for(int i=0; i<m; i++)
        cin >> vec2[i];

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end(), func1);
//    for(auto i : vec1)
//        cout << i << " ";
//    cout << endl;
//    for(auto i : vec2)
//        cout << i << " ";
//    cout << endl;

    if(n == 1){
        cout << max(abs(vec1[0] - vec2[0]), abs(vec1[0] - vec2[m-1])) << endl;
        return;
    }

    ll ans =INT_MIN;
    for(int i=0 ;i<n; i++){
        ll temp =0;
        for(int j = 0; j < i; j++){
            temp+= abs(vec1[j] - vec2[j]);
        }
        for(int j = n-1; j>= i; j--)
            temp+= abs(vec1[j] - vec2[j + m-n]);

        ans = max(temp,ans);
//        cout << temp << endl;
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