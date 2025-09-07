#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,k;
    cin >> t;
    for(int a=0; a<t; a++) {
    cin >> k;
    vector<int> series;
    
    for(int i=0; i<2000; i++) {
        if(i%3==0 || i%10==3){

        } else {
            series.push_back(i);
        }
    }
    cout << series[k-1] << endl;
}
}