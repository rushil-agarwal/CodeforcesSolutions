#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll k,ll arr[]){
    ll ans=0;
    for(int i=0;i<k;i++){
/*this loop iterates over each element of each repeating unit*/
        ll one=0; ll two=0;
        for(int j=0;j<n/k;j++){
            /*this loop iterates over the entire loop counting all 1's and 2's in the repeating digits like 1,k+1,2k+1...*/
            if(arr[i+j*k] == 1)
                one++;
            else
                two++;
        }
        /*we either change all ones to twos or vice versa, so we take min*/
        ans+=min(one,two);
    }
    return ans;
}

int main(){
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << solve(n,k,arr) << endl;
    return 0;

}