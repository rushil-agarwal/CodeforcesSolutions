#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,c,d;
    cin >> n >> c >> d;
    ll arr[n*n];
    for(int i=0; i<n*n; i++)
        cin >> arr[i];

    sort(arr, arr+n*n);

    ll min = arr[0];
    vector<ll> vec;
    vec.push_back(min); ll temp;
    for(int i = 0; i<n; i++){
        if(i!=0)
            vec.push_back(vec[0] + (i)*d);
        temp = vec.size() -1;
        for(int j=1; j<n; j++){
            vec.push_back(vec[temp] + (j)*c);
        }
    }
    sort(vec.begin(), vec.end());
    bool ans = true;
    for(int i=0; i<n*n; i++){
        if(vec[i] != arr[i]){
            ans = false;
            break;
        }
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}