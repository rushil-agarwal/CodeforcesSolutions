#include<iostream>
using namespace std;

void solve(){
    char position[2];
    cin >> position[0] >> position[1];
    char alphabets[8] = {'a','b','c','d','e','f','g','h'};
    int number[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
            if(number[i]!=position[1]-'0'){
            cout << position[0] << number[i] << " ";}
            if(alphabets[i] != position[0]){
            cout << alphabets[i] << position[1] << " ";}

    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}