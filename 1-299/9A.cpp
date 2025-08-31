#include <iostream>
using namespace std;
int main(){
    int biggest, y,w ;
    int numerator, denominator;
    cin >> y >> w;
    biggest = y;
    if(biggest<w) biggest = w;
    numerator = 7-biggest;

    if(numerator ==6){
        numerator =1;
        denominator=1;
    } else {
        for(int i=1;i<=6;i++){
            if(numerator%i ==0 && 6%i ==0 ){
                numerator = numerator/i;
                denominator = 6/i;
            }
        }   
    } 

    cout << numerator <<"/" << denominator << endl << 24*5;
    return 0;

}