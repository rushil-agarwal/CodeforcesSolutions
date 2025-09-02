#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x,y,z;
    for(int i=0; i<s.size(); i++){
        if(s[i]==1){
            x++;
        }
        if(s[i] == 2) {
            y++;
        }
        if(s[i]==3){
            z++;
        }
    }
    cout << x << y << z;
    for(int i = 0; i<s.size(); i++) {
        if (i == 0){
            if (x>0) {
                cout << "1";
                x--;
            }
            else if (y>0){
                cout << "2";
                y--;
            }
            else if (z>0){
                cout << "3";
                z--;
            }
        }
        else {
            if (x>0) {
                cout << "+" << "1";
                x--;
            }
            else if (y>0){
                cout << "+2";
                y--;
            }
            else if (z>0){
                cout << "+3";
                z--;
            }
        }
    }
}