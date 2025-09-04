#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(a < b)
        cout << 2*c + 2*a + 1 << endl;
    else if(a > b)
        cout << 2*c + 2*b + 1 << endl;
    else
        cout << 2*c + a + b;
    return 0;
}