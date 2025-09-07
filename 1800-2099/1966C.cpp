#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,q; cin >> n >> q;
    string a,b; cin >> a >> b;

    for(int i=0; i<q; i++){
        int l,r; cin >> l >> r;
        int ans1=0;
        l--; r--;
        vector<char> vec1(26,0), vec2(26,0);
        for(int j=l; j<=r; j++)
            vec1[a[j]-'a']++;
        for(int j=l; j<=r; j++)
            vec2[b[j]-'a']++;

        for(int i=0; i<26; i++){
            int temp = vec1[i] - vec2[i];
            ans1+=abs(temp);
        }

        cout << ans1/2 << endl;
    }
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
