#include<iostream>
using namespace std;

int solve(int n,int camels[][2]){
    for(int i=0;i<n;i++){
        int position = camels[i][0] + camels[i][1];
        for(int j=0;j<n;j++){
            if(camels[j][0] == position){
                int variable = camels[j][0] + camels[j][1];
                if(variable == camels[i][0]){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int camels[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> camels[i][j];
        }
    }
    if(solve(n,camels)){cout << "YES" << endl;}
    else{cout << "NO" << endl;}
}