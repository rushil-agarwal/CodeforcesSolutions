#include <iostream>
using namespace std;

void solver(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a+b) == c){
        cout << "+\n";
    } else {
        cout << "-\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }
}