#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n+2);

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        arr[temp]++;
    }

    int curr = 0;
    while(arr[curr] > 0)
        curr++;

    cout << min(curr, k-1) << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}