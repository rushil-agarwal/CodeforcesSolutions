#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    int n, temp1 = 0, temp2 = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            temp1 = 1;
        if (arr[i] < 0)
            temp2++;
    }

    if (temp1){
        cout << "0" << endl;
    }else if(temp2%2 == 1){
        cout << "0" << endl;
    } else {
        cout << "1" << endl << "1 0" << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}