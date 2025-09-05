#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll t,temp;
    cin >> t;
    ll arr[t];
    int temp2=1;
    for(int i =0;i<t;i++){
        cin >> temp;
        if(temp%2 == 0){
            arr[i] = temp/2;
        } else {
            arr[i] = (temp+temp2)/2;
            temp2 *=-1;
        }
    }

    for(int i=0;i < t;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}