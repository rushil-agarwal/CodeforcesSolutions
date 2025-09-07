#include<iostream>
using namespace std;

void solver(){
    int n,m;
    cin >> n >> m;
    long long int cost=m*(m+1)/2;
    for(int i=2;i<=n;i++){
        cost+=m*i;
    }
    cout << cost << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){solver();}
}