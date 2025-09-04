#include<iostream>
#define ll long long int
using namespace std;

int solve(ll x,ll y,ll z, ll a, ll b, ll c){
    if(x<=a && y<=a+b-x && z<=a+b+c-x-y)
        return 1;
    else
        return 0;
}

int main(){
    ll x,y,z,a,b,c;
    cin >> x >> y >> z >>  a >> b >> c;
    if(solve(x,y,z,a,b,c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}