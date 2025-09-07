#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool solve(){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    a += '0';
    b += '0';
    int availA=0, availB=0;
    int temp1 = n/2, temp2 = n-(n/2);

    for(int i=0; i<n; i++){
        if((i+1)&1){
            if(a[i] == '1')
                availA++;
            if(b[i] == '1')
                availB++;
        } else {
            if(a[i] == '1')
                availB++;
            if(b[i] == '1')
                availA++;
        }
    }

    if(availA <= temp1 && availB <= temp2)
        return true;
    return false;



}

int main(){

    ll t;
    cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}