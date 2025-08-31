#include<iostream>
#include<vector>

using namespace std;

int maximum(int x, vector<int> vec1){
    int y;
    y=vec1[0];
    for(int i=1;i<x;i++){
        if(y<vec1[i]){
            y = vec1[i];
        }
    }
    return y;
}

int main(){
    int n;
    cin >> n;
    int matrix[n][2];

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> matrix[i][j];
        }
    }
    int passengers=0;
    vector<int> vec1;
    for(int i=0;i<n-1;i++){
        if(i==0){passengers+=matrix[0][1];
        vec1.push_back(passengers);}
        else {
            passengers = passengers - matrix[i][0] + matrix[i][1];
            vec1.push_back(passengers);
        }
    }
    cout << maximum(n-1, vec1) << endl;

}