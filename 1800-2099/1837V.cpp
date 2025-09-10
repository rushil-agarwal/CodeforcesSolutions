#include <iostream>
using namespace std;
void solver(){
    string s;
    int x =1; int t;
    cin >> t >> s;
    for(int i=0;i<t;i++){
        if(s[i] == '<'){
            x++;
        } else {
            x--;
        }
    }
    if(x ==0){ cout << "3" << endl;}
    else{
    cout << abs(x) << endl; }
}

int main(){
    int x;
    cin >> x;
    while(x>0){
        solver();
        x--;
    }

}