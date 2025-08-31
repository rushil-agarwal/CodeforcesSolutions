#include <iostream>
using namespace std;



int main(){
    int t,solved;
    cin >> t;

    for(int i=0; i<t; i++) {
     int answer[3];
    int b=0;
    for (int a=0; a<3; a++) {
        cin >> answer[a];

        if(answer[a]==1) {
            b=b+1;
        }
    }
    if(b>=2) {
        solved = solved+1;
    }
    }
    cout << solved;
}