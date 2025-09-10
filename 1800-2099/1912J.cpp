#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char array[n];
    int netL=0;int netO=0;
    for(int i=0;i<n;i++){
        cin >> array[i];
        if(array[i] == 'L'){netL++;}
        else{netO++;}
    }

    int cntL=0;int cntO=0;
    for(int i=0;i<n;i++){
        if(array[i] == 'L')
            cntL++;
        else
            cntO++;
        if(cntO!= netO-cntO && cntL!=netL-cntL)
            cout << i+1 << endl; return 0;
    }
    cout << -1 << endl;
    return 0;
}