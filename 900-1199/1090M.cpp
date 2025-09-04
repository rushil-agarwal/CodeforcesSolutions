#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,k,max1=0;
    cin >> n >> k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    ll temp=0;
    for(int i=0;i<n-1;i++){
        if(arr[i] != arr[i+1]){
            temp++;
        } else {
            max1 = max(max1,temp);
            temp=0;
        }
    }
    max1 = max(max1,temp);
    cout << max1+1<< endl;
    return 0;
}