#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, less=0, more=0;
    long long choice; 
    cin >> n >> choice;
    vector<long long> vec(n);

    for(int i=0; i<n; i++){
        long long temp; cin >> temp;
        if(temp < choice)
            less++;
        else if(temp > choice)
            more++;
    }

    if(choice == 1){
        cout << 2 << endl;
        return;
    } else if(choice == 1e9){
        cout << (int)(1e9-1) << endl;
        return;
    }

    if(less >= more){
        cout << choice - 1 << endl;
    } else {
        cout << choice+1 << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}