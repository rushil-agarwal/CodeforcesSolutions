#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    int n, temp; cin >> n;
    unordered_set<int> a, b;

    for(int i=0; i<n; i++){
        cin >> temp;
        a.insert(temp);
    }
    for(int i=0; i<n; i++){
        cin >> temp;
        b.insert(temp);
    }

    if(a.size()*b.size() >= 3)
        return true;
    return false;
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