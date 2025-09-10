#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int index=1;
    for(int i=1; i<n;i++) {
        if (arr[i] >= arr[i - 1]) {
            index++;
        } else {
            break;
        }
    }
//    cout << "INDEX: " << index << endl;
    for(int i=0; i<index; i++)
        cout << "1";

    int end = arr[index];
    for(int i = index; i<n; i++){
        if(arr[i]>= end && arr[i]<= arr[0]){
            cout << "1";
            end = arr[i];
        } else {
            cout << "0";
        }
    }
    cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}