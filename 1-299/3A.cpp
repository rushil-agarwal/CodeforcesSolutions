#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int steps=max(abs(a[0] - b[0]),abs(a[1] - b[1]));

    cout << steps << endl;
    while(a!=b){

        if(a[0] < b[0]){
            cout << "R";
            a[0]+=1;
        } else if(a[0] > b[0]){
            cout << "L";
            a[0]-=1;
        }

        if(a[1] < b[1]){
            cout << "U";
            a[1]+=1;
        } else if(a[1] > b[1]) {
            cout << "D";
            a[1]-=1;
        }

        cout << endl;
    }



    return 0;
}