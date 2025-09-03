#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,one=0,zero=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
        if(arr[i] == 1)
            one++;
        else
            zero++;
    }
    if(n == 1){
        if(zero == 0) {
            cout << "YES" << endl;
            return 0;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(zero!=1)
        cout << "NO" << endl;
    else
        cout << "YES" <<endl;
}