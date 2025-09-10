#include <iostream>
using namespace std;
int main(){
    long long int n, x;
    cin >> n;
    long long int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    for(int j=0; j<n; j++){
        if(array[j] < 0){
            array[j] = -1*array[j];
        }
    }

    x = array[0];
    for(int k = 1; k<n; k++){
        if(x>array[k]){
            x = array[k];
        }
    }
    cout << x;
    return 0;
}