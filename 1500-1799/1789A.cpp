#include <iostream>
using namespace std;

void solver(){
    int a,b,c;
    cin >> a >> b >> c;
    if(abs(a-1)<abs(b-c)+abs(c-1)){cout << "1"<<endl;}
    else if(abs(a-1)>abs(b-c)+abs(c-1)){cout << "2"<<endl;}
    else {cout << "3"<<endl;}

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }
    return 0;
}