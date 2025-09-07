#include<iostream>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]%arr[0] != 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}