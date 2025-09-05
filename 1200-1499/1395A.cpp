#include<iostream>
using namespace std;

int solver(long int red,long int green,long int blue,long int white){
    while(red >= 0  &&green >= 0 && blue >=0 && white >= 0){
        if(red%2 + green%2 + blue%2 + white%2 == 1){ return 1;}
        else if(red%2 + green%2 + blue%2 + white%2 == 0){return 1;}
        else if(red%2 + green%2 + blue%2 == 3 && white%2 == 0){return 1;}
        else {
            red--; green--; blue--; white+=3;
        }
    }
    return 0;
}

void solve(){
    long int red,green,blue,white;
    cin >> red >> green >> blue >> white;
    if(solver(red,green,blue,white)){cout << "Yes"<<endl;}
    else {cout << "No" << endl;}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}