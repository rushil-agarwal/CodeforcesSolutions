#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll r,g,b;
    cin >> r >> g >> b;
    ll time=30;
    time+=r/2+g/2+b/2;
    if(r%2==1 && r>2)
        time+=2;
    if(g%2==1 && g>2)
        time+=2;
    if(b%2==1 && b>2)
        time+=2;

    cout << time << endl;
    return 0;
}