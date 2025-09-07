#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int array[n];int start;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    for(int i=0;i<n;i++){
        if(array[i]!=0){
            start = i;
            break;
        }
    }
    int array2[n-start-1];
    int result=0;
    for(int i=0;i<n-start-1;i++){
        array2[i] = array[start+i];
        if(array2[i] == 0){
            result++;
        } else{
            result+=array2[i];
        }
    }

    cout <<result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}