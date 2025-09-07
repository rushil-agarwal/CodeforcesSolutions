#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
   // vector<int> vec(n);
    int odd=0, highest = 0;
    int total=0, temp;

    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp%2==1)
            odd++;
        total+=temp;
        if(temp > highest)
            highest = temp;
    }

    if(odd == n || odd == 0)
        cout << highest << endl;
    else {
        cout << (total - (odd-1)) << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}