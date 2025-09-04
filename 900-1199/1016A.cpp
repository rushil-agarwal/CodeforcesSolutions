#include <bits/stdc++.h>
using namespace std;

int main(){
    int days, onePage;
    cin >> days >> onePage;
    int people[days];
    for(int i=0;i<days;i++){
        cin >>people[i];
    }

    vector<int> turned;
    int toWrite=0;
    for(int i=0;i<days;i++){
        toWrite+=people[i];
        if(toWrite>=onePage){
            turned.push_back(toWrite/onePage);
            toWrite-=onePage*(toWrite/onePage);
        } else {
            turned.push_back(0);
        }
    }
    for(int i=0;i<days;i++){
        cout << turned[i] << " ";
    }
    return 0;
}