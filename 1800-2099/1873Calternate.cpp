#include <iostream>
using namespace std;
int main(){
    int x[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1},
    };

    int t;
    int points=0;
    int board[10][10];
    cin >> t;
    while(t>0){
        for(int i=0; i<10; i++){
            for(int j=0;j<10;j++){
                cin >> board[i][j];
                if(board[i][j] == 'X'){
                    points += x[i][j];
                }
            }
        }
        cout << points << endl;
        points=0;
        t--;
    }
}