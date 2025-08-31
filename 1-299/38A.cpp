#include<iostream>
using namespace std;

int main(){
    int ranks;
    int start, end;
    cin >> ranks;
    int years[ranks-1];
    for(int i=0; i<ranks-1; i++){
        cin >> years[i];
    }
    cin >> start >> end;
    int sum=0;
    for(int i=start; i<end; i++){
        sum+=years[i-1];
    }
    cout << sum << endl;
    return 0;

}