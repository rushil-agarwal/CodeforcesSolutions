#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int pieces = n+1;
    if(pieces%2==0){cout << pieces/2 << endl;}
    else if(pieces == 1){cout << "0" << endl;}
    else {
        cout << pieces << endl;
    }
}