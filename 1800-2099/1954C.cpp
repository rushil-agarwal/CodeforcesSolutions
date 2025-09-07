#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string a,b;
    cin >> a >> b;

    if(a<b)
        swap(a,b);

    bool temp = false;

    for(int i=0; i<a.size(); i++){
        if(a[i] > b[i] && temp){
            swap(a[i], b[i]);
        }
        if(a[i]!=b[i])
            temp=true;
    }

    cout << a << endl << b << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}