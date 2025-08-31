#include <iostream>
using namespace std;

int solve(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*(n-i);
    }
return sum+n;}

int main(){
    int n;
    cin >> n;
    cout << solve(n);
return 0;}