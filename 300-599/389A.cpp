#include<iostream>
using namespace std;
void solver(int n, int array[]);
void printer(int n, int array[]);

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    solver(n, array);
    return 0;
}

void printer(int n,int array[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    cout << sum;
}

void solver(int n, int array[]){
    test:
    for(int i=0; i<n-1;i++){
        if(array[i]<array[i+1]){
            array[i+1] = array[i+1] - array[i];
            goto test;
        }
    }
    for(int i=n-1;i>0;i--){
        if(array[i]<array[i-1]){
            array[i-1] = array[i-1] - array[i];
            goto test;
        }
    }
    printer(n,array);
}