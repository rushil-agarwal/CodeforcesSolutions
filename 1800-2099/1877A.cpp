#include<iostream>
using namespace std;

void solve(){
    int n; int sum=0;
    cin >> n;
    int array[n-1];
    for(int i=0;i<n-1;i++){
        cin >> array[i];
        sum+=array[i];
    }
    cout<<(-1)*sum << endl;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
}