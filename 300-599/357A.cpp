#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int func1(ll m,ll arr[],ll i,ll x, ll y){
    ll sum1=0; ll sum2=0;
    for(int j=0;j<i;j++){
        sum1+=arr[j];
    }
    for(ll j=i; j<m;j++){
        sum2+=arr[j];
    }
    if(sum1 <= y && sum1>=x && sum2 <= y && sum2>=x )
        return 0;
    else
        return 1;

}

int main(){
    ll m;
    cin >> m;
    ll arr[m];
    for(int i=0;i<m;i++)
        cin >> arr[i];
    ll x,y;
    cin >> x >> y;
    ll ans = 0;
    for(int i=0;i<m;i++){
        if(func1(m,arr,i,x,y)){
            continue;
        } else {
            ans = i+1;
            break;
        }
    }
    cout << ans<< endl;
    return 0;
}