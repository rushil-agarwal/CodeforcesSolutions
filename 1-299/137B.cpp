#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count[n]; int array[n];
    for(int i=0;i<n;i++){
        count[i] =0;
        cin >> array[i];
    }
    for(int i=0;i<n;i++){
        if(array[i]<=n)
            count[array[i]-1]++;
    }
    int cnt0=0;
    for(int i=0;i<n;i++){
        if(count[i] == 0){
            cnt0++;
        }
    }
    cout << cnt0 << endl;
}