#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll p,q;
    ll odd1=0,even1=0,odd2=0,even2=0;
    cin >> p;
    ll arr1[p];
    for(int i=0;i<p;i++) {
        cin >> arr1[i];
        if(arr1[i]%2 == 0)
            even1++;
        else
            odd1++;
    }
    cin >> q;
    ll arr2[p];
    for(int i=0;i<q;i++) {
        cin >> arr2[i];
        if(arr2[i]%2 == 0)
            even2++;
        else
            odd2++;
    }
    cout << odd1*odd2 + even1*even2 << endl;

}

int main(){
    ll t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}