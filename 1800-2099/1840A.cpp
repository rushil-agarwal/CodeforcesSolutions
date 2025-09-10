#include <iostream>
using namespace std;

void solver(){
    int x;
    string s;
    string result ="";
    char temp;
    cin >>x >> s;

    for(int i=0; i<x;i++){
        result.push_back(s[i]);
        temp = s[i];
        i++;
        while(s[i]!=temp){
            i++;
        }
    }
    cout << result <<endl;
}


int main(){
    int t;
    cin >> t;
    while(t>0){
        solver();
        t--;
    }
}