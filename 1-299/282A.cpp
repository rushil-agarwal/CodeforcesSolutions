#include <iostream>
using namespace std;
int main(){
    string a;
    int t;
    int x=0;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> a;
        if(a == "X--" || a == "--X"){
            x=x-1;
        } else {
            x=x+1;
        }
    }
    cout << x;
}