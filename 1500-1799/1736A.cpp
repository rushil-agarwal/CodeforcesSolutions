#include<iostream>
using namespace std;

int method1(int n,const int a[],const int b[]){
    int zeroA=0; int zeroB=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){zeroA++;}
        if(b[i] == 0){zeroB++;}
    }

    return abs(zeroA - zeroB)+1;
}

int method2(int n,const int a[],const int b[]){
    int unequal=0;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            unequal++;
        }
    }
    return unequal;
}

int minimum(int x, int y){
    if(x<y){return x;}
    else {return y;}
}

void solve(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int x = method1(n,a,b);
    int y = method2(n,a,b);
//    cout << "X: " << x << endl << "Y: " << y << endl;
    cout << minimum(x,y) << endl;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
}