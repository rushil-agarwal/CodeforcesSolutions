#include<iostream>
using namespace std;

int solve(int n){
    char matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == '.'){
                if(((i+1)<n) && ((i+2)<n) && ((j+1)<n) && ((j-1)<n) && ((j-1)>=0) ) {
                    if (matrix[i + 1][j] == '.' && matrix[i + 2][j] == '.' && matrix[i + 1][j + 1] == '.' &&
                        matrix[i + 1][j - 1] == '.') {
                        matrix[i][j] = '#';
                        matrix[i + 1][j] = '#';
                        matrix[i + 2][j] = '#';
                        matrix[i + 1][j + 1] = '#';
                        matrix[i + 1][j - 1] = '#';
                    } else {
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
        }
    }

    return 1;
}

int main(){
    int n;
    cin >> n;

    if(solve(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}