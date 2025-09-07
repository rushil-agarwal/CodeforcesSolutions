#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int ans=1e9;
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        cin >> vec[i];


    if(n == k){
        for(int i=1; i<n; i+=2){
            if(vec[i]!=(i+1)/2){
                ans = (i+1)/2;
                break;
            }
        }
        ans = min(n/2+1, ans);
    } else {
        int idx=-1;
        //optimize first element;
        for(int i=1; i<=n-k+1; i++){
            if(vec[i]!=1){
                idx = i;
                break;
            }
        }

        if(idx == -1){
            //optimize from 2nd element;
            int opt = 2;
            for(int i=n-k; i<n; i++){
                if(vec[i]!=opt){
                    break;
                } else
                    opt++;
            }
            ans = opt;
        } else {
            ans = 1;
        }
    }

    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
