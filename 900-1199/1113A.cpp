#include<iostream>
#define ll long long int
using namespace std;


int main(){
    ll n, v;
    cin >> n >> v;
    if (n-1 <= v) {
        cout << n-1 << endl;
        return 0;
    }
    int result = v - 1;
    for(int i = 1; i <= n - v; ++i) {
        result += i;
    }
    cout << result << endl;

    return 0;
}