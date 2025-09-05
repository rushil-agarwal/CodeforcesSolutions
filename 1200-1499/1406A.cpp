#include<iostream>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr1[101];
    for(int i=0;i<101;i++){
        arr1[i]=0;
    }
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr1[temp]++;
    }
    int A=0; int B=0;
    for(int i=0;i<101;i++){
        if(arr1[i] == 0){
            A += i;
            break;
        }
    }
    for(int i=0;i<101;i++){
        if(arr1[i]==0 || arr1[i] == 1){
            B += i;
            break;
        }
    }
    cout << A + B << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}