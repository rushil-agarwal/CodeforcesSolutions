#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    int n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        long long int result = pow(2,n)-1;
        cout << result << endl;
    }
    return 0;
}