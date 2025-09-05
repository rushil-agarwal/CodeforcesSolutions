#include <bits/stdc++.h>
using namespace std;

int main(){
    double t;
    cin >> t;
    double ans=0;
    for(int i=1;i<=t;i++){
        ans+=1.0/i;
    }
    cout << setprecision(12) << ans<< endl;
    return 0;
}