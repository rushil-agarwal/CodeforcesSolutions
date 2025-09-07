#include <iostream>
using namespace std;
int main(){
    long long int sum, coin, t;
    cin >> t;
    for (int a=0; a<t; a++) {
        cin >> sum >> coin;
        if(sum%2 == 0){
            cout << "YES" << endl;
        } 
        if(sum%2 == 1) {
            if(coin%2 == 1) {
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl;
            }
        }
    }

}