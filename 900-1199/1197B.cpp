#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool func1(ll t, ll index, ll arr[]){
    for(int i=0;i<index;i++){
        if(arr[i] >= arr[i+1])
            return false;
    }
    return true;
}

bool func2(ll t, ll index, ll arr[]){
    for(int i=index;i<t-1;i++){
        if(arr[i] <= arr[i+1])
            return false;
    }
    return true;
}

int main(){
    ll t,index;
    cin >>t;
    ll arr[t];
    for(int i=0;i<t;i++){
        cin >> arr[i];
        if(arr[i] == t)
            index = i;
    }

    if(func1(t,index,arr) && func2(t,index,arr))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}