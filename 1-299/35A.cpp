#include<iostream>
using namespace std;

int main(){
    int ball;
    int cups[3][2];
    cin >> ball;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin >> cups[i][j];
        }
    }
    for(int i=0;i<3;i++){
        if(cups[i][0] == ball){
            ball = cups[i][1];
        } else if(cups[i][1] == ball){
            ball = cups[i][0];
        }
    }
    cout << ball << endl;
    return 0;
}