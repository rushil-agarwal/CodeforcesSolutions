#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n;
    cin >> n;
    ll arr[(int) n]; double avg=0;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        avg+=arr[i];
    }
    avg = avg/n;
    ll temp=0;
    for(int i=0; i<n;i++){

        if(arr[i] > avg){
            temp+=arr[i] - avg;
        } else {
            temp-= avg-arr[i];
        }

        if(temp<0){
            cout << "NO" << endl;
            return;
        }
    }

    if(temp == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}