#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<c){cout << "1 ";}
        else {cout << "-1 ";}
        float price=c/b;
        if(price<a){cout << b << " ";}
        else{cout << "-1 ";}

    }
    return 0;
}