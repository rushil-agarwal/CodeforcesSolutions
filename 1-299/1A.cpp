#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){

    long double m,n,a;
    long double x,y;
    cin >> m >> n >> a;
    x=m/a; y=n/a;
    cout << fixed  << setprecision(0) << ceil(x)*ceil(y);
}