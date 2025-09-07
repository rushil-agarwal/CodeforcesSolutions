#include<iostream>
using namespace std;

int solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int operations=0;
    line:
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1] && arr[i] == 0){
            return -1;
        }
        if(arr[i]>=arr[i+1]){
            arr[i]=arr[i]/2;
            operations++;
            goto line;
        }

    }
    return operations;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}