#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    int notes=0;
    while(n>=100){
        notes++;
        n-=100;
    }
    while(n>=20){
        notes++;
        n-=20;
    }
    while(n>=10){
        notes++;
        n-=10;
    }
    while(n>=5){
        notes++;
        n-=5;
    }
    while(n>=1){
        notes++;
        n-=1;
    }
    cout << notes << endl;
}