#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    array[0] = 1;
    array[1] = 1;
    for(int i=2; i<=n; i++){
        array[i] = array[i-1] + array[i-2];
    }
    cout << array[n] << endl;
}