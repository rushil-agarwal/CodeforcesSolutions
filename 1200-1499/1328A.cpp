#include <iostream>
using namespace std;
int main(){
    int t;
    long long int a,b;
    int moves=0;
    int remainder;
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> a >> b;

        remainder= a%b;
        if(remainder == 0) {
            cout << "0" << endl;
        } else {
        moves = b - remainder;
        cout << moves<< endl;
    }
    }
}