#include<iostream>
using namespace std;

int solve(int n){
    int array[n+1];
    array[0] = -23345;
    for(int i=1; i<=n; i++){
        cin >> array[i];
    }
    for(int i=1;i<n;i++){
        if( i == array[array[array[i]]]) {return 1;}
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    if(solve(n)){cout << "YES" << endl;}
    else {cout << "NO" << endl;}
    return 0;
}