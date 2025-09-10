#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int func(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

void solve(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];

    if(k>=2)
        cout << "YES" << endl;
    else if(n ==1)
        cout << "YES" << endl;
    else {
        if(func(arr,n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}