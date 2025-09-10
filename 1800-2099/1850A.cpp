#include <iostream>
using namespace std;

void solver(){
    char a[8][8];

    for(int i=0; i<8;i++){
        for(int j=0;j<8;j++){
            cin >> a[i][j];
        }
    }    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[j][i] != '.'){
                cout << a[j][i];
            }
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }

}