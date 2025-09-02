#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(n);

    int ans=0, ones=0, curr=0;

    for(int i=0; i<n; i++){
        cin >> vec[i];
        if(vec[i] == 1) ones++;
    }

    if(ones == n){
        cout << ones-1 << endl;
        return;
    }

    for(int i=0; i<n; i++){
        if(!vec[i])
            curr++;
        else
            curr--;
 
        ans = max(ans, curr);

        if(curr < 0)
            curr = 0;
    }

    cout << ones + ans << endl;
}

int main(){

    ll t=1;
    while(t--)
        solve();
    return 0;
}