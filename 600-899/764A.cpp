#include<iostream>
using namespace std;


int main(){
    int n,m,z;
    int lcm=1;
    cin >> n >> m >> z;
    while(true){
        if(lcm%n == 0 && lcm%m == 0){ break;}
        else {lcm++;}
    }
    cout << z/lcm << endl;
}