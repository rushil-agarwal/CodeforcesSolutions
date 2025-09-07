#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n]; int zero=0; int temp=0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] == 0)
            zero++;
        if(arr[i] >=2)
            temp=1;
    }

    if(zero<= (n+1)/2)
        cout << "0" << endl;
    else if(temp || zero == n)
        cout << "1" << endl;
    else
        cout << "2" << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}