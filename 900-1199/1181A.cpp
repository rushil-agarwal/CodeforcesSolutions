#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll x,y,cost;
    cin >> x >> y >> cost;
    int coconuts=0;
    coconuts+=(x+y)/cost;
    int a = x%cost;
    int b = y%cost;
    if(coconuts == x/cost + y/cost)
        cout << coconuts << " " << "0" << endl;
    else
        cout << coconuts << " " << cost - max(a,b);
    return 0;
}