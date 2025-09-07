#include <iostream>
using namespace std;

int main(){
    string x;
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
    cin >> x;
    if(x[0] + x[1] + x[2] == x[3] + x[4] + x[5]){
        cout << "YES" << endl;
    } else {
        cout << "NO"<< endl;
    }
    }
}
