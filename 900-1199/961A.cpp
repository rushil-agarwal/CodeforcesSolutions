#include<iostream>
using namespace std;

int minimum(int n, int blocks[]){
    int min = blocks[0];
    for(int i=1;i<n;i++){
        if(min>blocks[i]){
            min = blocks[i];
        }
    }
    return min;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[k];
    for(int i=0;i<k;i++){
    cin >> arr[i];
    }

    int blocks[n];
    for(int i=0;i<n;i++){
        blocks[i] =0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr[j] == i+1){
                blocks[i]++;
            }
        }
    }

    cout << minimum(n,blocks) << endl;
    return 0;
}