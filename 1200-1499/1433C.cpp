#include<iostream>
using namespace std;

int MAX(int n,const int size[]){


    int max = size[0];
    for(int i=1;i<n;i++){
        if(max<size[i])
            max = size[i];
    }
    return max;
}

void solve(){
    int n;
    cin >> n;
    int size[n];
    for(int i=0;i<n;i++){
        cin >>size[i];
    }
    int max = MAX(n,size);
    for(int i=0;i<n;i++){
        if(size[i] == max){
            if(i==0 && size[1]<max){cout << i+1 << endl;return;}
            else if(i==n-1 && size[n-2]<max){cout << i+1 << endl;return;}
            else if(i!=0 && i!=n-1){
                if(size[i-1]<size[i] || size[i+1] < size[i]){
            cout << i+1 << endl;return;}}
        }
    }
    cout << "-1 " <<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}