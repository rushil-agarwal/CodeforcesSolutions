#include<iostream>
#define ll long long int
using namespace std;

ll func1(ll x){
    int sum=0;
    for(int i=0;i<=x;i++)
        sum+=i;
    return sum;
}

int main(){
    ll a,b;
    cin >> a >> b;
    if((abs(a-b))%2==1){
        cout << func1((abs(a-b))/2) + func1((abs(a-b)/2)+1) << endl;
        return 0;
    } else {
        cout << 2*func1((abs(a-b))/2) << endl;
        return 0;
    }
}