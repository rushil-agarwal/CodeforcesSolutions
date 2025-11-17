#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long length, fullLen, total; cin >> length >> fullLen >> total;

    long long maxSeg = length/fullLen;

    long long ans = 1;

    if(total > maxSeg && fullLen < length)
        ans++;

    cout << ans << endl;



}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}