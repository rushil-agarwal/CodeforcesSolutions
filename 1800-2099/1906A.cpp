#include<iostream>
using namespace std;

void third(char result[3], char matrix[3][3]){
    int x,y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 'Y'){
                x =i;
                y=j;
            }
        }
    }

    int adjacent[] = {x,y+1, x-1,y+1,x-1,y,x-1,y-1,x,y-1,x+1,y-1,x+1,y,x+1,y+1};
    for(int i=0;i<8;i++){
        if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
            if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'A'){
                result[2] = matrix[adjacent[2*i]][adjacent[2*i+1]];
//                matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
            }
        }
    }

    if(result[2] != 'A'){
        for(int i=0;i<8;i++){
            if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
                if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'B'){
                    result[2] = matrix[adjacent[2*i]][adjacent[2*i+1]];
//                    matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
                }
            }
        }
    }

    if(result[2] != 'B' && result[2] != 'A'){
        for(int i=0;i<8;i++){
            if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
                if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'C'){
                    result[2] = matrix[adjacent[2*i]][adjacent[2*i+1]];
//                    matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        cout << result[i];
    }
    cout << endl;

}

void second(char result[3],char matrix[3][3]){
    int x,y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 'X'){
                x =i;
                y =j;
            }
        }
    }

    int adjacent[] = {x,y+1, x-1,y+1,x-1,y,x-1,y-1,x,y-1,x+1,y-1,x+1,y,x+1,y+1};
    for(int i=0;i<8;i++){
        if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
            if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'A'){
                result[1] = matrix[adjacent[2*i]][adjacent[2*i+1]];
                matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
            }
        }
    }

    if(result[1] != 'A'){
        for(int i=0;i<8;i++){
            if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
                if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'B'){
                    result[1] = matrix[adjacent[2*i]][adjacent[2*i+1]];
                    matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
                }
            }
        }
    }

    if(result[1] != 'B' && result[1] != 'A'){
        for(int i=0;i<8;i++){
            if(0<= adjacent[2*i] <=2 && 0<= adjacent[2*i+1] <=2){
                if(matrix[adjacent[2*i]][adjacent[2*i+1]] == 'C'){
                    result[1] = matrix[adjacent[2*i]][adjacent[2*i+1]];
                    matrix[adjacent[2*i]][adjacent[2*i+1]] = 'Y';
                }
            }
        }
    }

    third(result,matrix);
}

void first(char matrix[3][3]){
    char result[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 'A'){
                result[0] = matrix[i][j];
                matrix[i][j] = 'X';
            }
        }
    }

    if(result[0] != 'A'){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j] == 'B'){
                    result[0] = matrix[i][j];
                    matrix[i][j] = 'X';
                }
            }
        }
    }

    if(result[0] != 'B' && result[0] != 'A'){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(matrix[i][j] == 'C'){
                    result[0] = matrix[i][j];
                    matrix[i][j] = 'X';
                }
            }
        }
    }

    second(result,matrix);
}

int main(){
    char matrix[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matrix[i][j];
        }
    }
    first(matrix);
    return 0;
}