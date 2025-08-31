#include<iostream>
using namespace std;

int solve(char matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3; j++){
            if(matrix[i][j] != matrix[2-i][2-j]){return 0;}
        }
    }
    return 1;
}

int main(){
    char matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matrix[i][j];
        }
    }

    if(solve(matrix)){cout << "YES" << endl;}
    else {cout << "NO" << endl;}
}