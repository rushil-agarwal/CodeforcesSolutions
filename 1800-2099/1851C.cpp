#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){

    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(arr[0]  == arr[n-1]){
        ll var=0;
        for(int i=0;i<n;i++){
            if(arr[i] == arr[0]){
                var++;
            }
        }
        if(var>=k)
            return 1;
        else
            return 0;
    }

    ll temp1,temp2;
    ll temp3=0,temp4=0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[0])
            temp3++;
        if(temp3 == k){
            temp1 = i;
            break;
        }
    }

    for(int i = n-1;i>=0;i--){
        if(arr[i] == arr[n-1]){
            temp4++;
        }
        if(temp4 == k){
            temp2 = i;
            break;
        }
    }

    if(temp1<temp2)
        return 1;
    else
        return 0;
}

int main(){

    ll t;
    cin >> t;
    while(t--){
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}