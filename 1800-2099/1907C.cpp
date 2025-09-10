#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec(26,0);
    for(int i=0; i<n; i++){
        char temp;
        cin >> temp;
        vec[temp-'a']++;
    }
    sort(vec.begin(), vec.end());

    if(vec[25] > n/2){
        cout << 2 * vec[25] - n << endl;
    } else {
        if(n%2)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }

}

int main(){
    int t; cin>> t;
    while(t--)
        solve();
}