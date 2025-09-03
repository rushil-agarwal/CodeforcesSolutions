#include <iostream>
using namespace std;

int main(){
    long long int distance;
    cin >> distance;

    int steps =0;
    int a;

    int remainder;
    if(distance >=5) {
        a=distance/5;
        remainder=distance%5;
        if(remainder !=0) {
            steps=a+1;
        } else{
            steps=a;
        }
    } else {
        steps = 1;
    }
    cout << steps;
}