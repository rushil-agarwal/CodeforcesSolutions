#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll na,nb,k,m;
    cin >> na >> nb >> k >> m;
    ll a[na],b[nb];
    for(int i=0;i<na;i++)
        cin >> a[i];
    for(int i=0;i<nb;i++)
        cin >> b[i];
    ll element = a[k-1];
    ll index;
    for(int i=0;i<nb;i++){
        if(b[i] > element){
            index = i;
            break;
        }
    }
    if(m <= nb-index)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}