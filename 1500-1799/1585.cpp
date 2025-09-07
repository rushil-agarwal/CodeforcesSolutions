#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> og,list;
    list.push_back(0);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        og.push_back(temp);
    }
    for(int i=n-1;i>=0;i--){
        if(og[i]>list[list.size()-1]){
            list.push_back(og[i]);
        }
    }
    cout << list.size()-2 << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}