#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    bool temp = true, ans = true;
    for(int i=0; i<n-1; i++){

        if(arr[i] > arr[i+1]){
            temp = false;
        }
        if(arr[i] <= arr[i+1] && !temp){
            ans = false;
        }
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}