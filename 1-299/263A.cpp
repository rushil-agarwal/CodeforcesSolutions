#include <iostream>
using namespace std;



int main(){
    int matrix[5][5];
    int x,y;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j]==1){
                y=i+1;
                x=j+1;
            }
        }
    }
    int steps = abs(3-x) + abs(3-y);
    cout << steps;

    /* cout << matrix[y][x];
    0 0 0 1 0
    0 0 0 0 0
    0 0 1 0 0
    0 0 0 0 0
    0 0 0 0 0
    */
}