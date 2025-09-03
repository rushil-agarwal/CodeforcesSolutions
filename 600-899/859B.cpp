#include <bits/stdc++.h>
#define ll long double
using namespace std;


int main(){
    ll n;
    cin >> n;
    cout << 2*(ceil(sqrt(n)) + ceil(n/ceil(sqrt(n))));
}