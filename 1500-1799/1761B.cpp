#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> s;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    if(s.size() == 2){
        cout << n/2+1 << endl;
    } else {
        cout << n << endl;
    }
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}