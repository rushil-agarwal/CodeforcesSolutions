#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//WRONG
void solve(){

    ll n,k,q; cin >> n >> k >> q;
    long double signs[k+1]; signs[0] = 0;
    long double times[k+1]; times[0] = 0;

    for(int i=1; i<k+1; i++)
        cin >> signs[i];
//    cout << "got all signs" << endl;
    for(int i=1; i<k+1; i++)
        cin >> times[i];
//    cout << "got all times" << endl;

    int query;
    for(int i=0; i<q; i++){
        long double time=0;
        cin >> query;
        int index =0;
        while(signs[index+1] < query)
            index++;
//        cout << "index: " << index << endl;

        for(int j=0; j<=index; j++)
            time+=times[j];
//        cout << "TIME: " << time << endl;
        long double temp1 = signs[index+1] - signs[index];
        long double temp2 = times[index+1] - times[index];
//        cout << "temp1: " << temp1 << " temp2: " << temp2 << endl;
        time+= floor((query - signs[index])/(temp1/temp2));

        int temp3 = time; cout << temp3 << " ";

    }
    cout << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}