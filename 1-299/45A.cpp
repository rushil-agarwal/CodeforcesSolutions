#include<iostream>
using namespace std;

int main() {
    string month;
    cin >> month;
    int months;
    cin >> months;
    string year[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
                   "November", "December"};
    int current;
    for(int i=0;i<12;i++){
        if(month == year[i]){
            current = i+1;
        }
    }
    int toPrint = months+current;
    cout << year[(toPrint-1)%12];
    return 0;
}