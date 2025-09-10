#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    pair<int,int> arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i].first;
    }
    for(int i=0; i<n;i++){
        cin >> arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0; i<n;i++){
        cout << arr[i].first << " ";
    } cout << endl;
    for(int i=0; i<n;i++){
        cout <<  arr[i].second << " ";
    } cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}