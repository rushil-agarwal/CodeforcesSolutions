#include<iostream>
using namespace std;

void solve(){
    int legs; cin >> legs;
    int ans=0;
    ans+=legs/4;
    legs-=ans*4;
    ans+=legs/2;
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--)
        solve();
}