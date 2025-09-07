#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> vec(n, {0,0});
    int length=-1, breadth=-1;
    for(int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        length = max(length, a);
        breadth = max(breadth, b);
    }

    cout << 2*(length + breadth) << endl;


}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}