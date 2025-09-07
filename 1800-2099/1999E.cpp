#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll l,r; cin >> l >> r;
    vector<ll> vec;
    for(ll i=l; i<=r; i++)
        vec.push_back(i);

    ll ans=0;
    while(vec[0]!=0){
        vec[0] /= 3;
        ans+=2;
    }
    while(vec[1]!=0){
        vec[1]/=3;
        ans++;
    }

    if(vec.size()==2){
        cout << ans << endl;
        return;
    }

    ll divi=3,pow=1;
    ll temp=r;
    while(temp!=0){
        temp/=3;
        divi*=3;
        pow++; ans++;
    }
    divi/=3; pow--;
    cout << ans << endl;
    r--;l+=2;
    cout << "R " <<  r << endl << "L " << l << endl;
    cout << divi << endl;
    while(r>=l){
        ll no = min(r-l+1, r-divi+1);
        ans+=no*pow;
        r=divi-1; cout << "R: " << r << endl;
        divi/=3; pow--;
    }

    cout << ans << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}