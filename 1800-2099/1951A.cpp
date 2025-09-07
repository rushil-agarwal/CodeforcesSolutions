#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt=0;
    int mini = n; int maxi = -1;
    for(int i=0; i<n; i++){
        if(s[i] == '1') {
            cnt++;
            mini = min(mini,i);
            maxi = max(maxi,i);
        }
    }



    if(cnt%2 == 1 || (cnt == 2 && maxi-mini == 1))
        return 0;
    else
        return 1;
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