#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;

ll func1(int n, int array[]){
    int MAX = array[0];
    for(int i=1;i<n;i++){
        if(MAX<array[i]) {
            MAX = array[i];
        }
    }
    return MAX;
}

void solve(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >>array[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        while(array[i]%2 == 0){
            if(array[i]==0){break;}
            k++;
            array[i]/=2;
        }
    }
    ll MAX = func1(n,array);
    for(int i=0;i<n;i++){
        if(array[i] == MAX) {
            array[i] = 0;
            break;
        }
    }
    MAX = MAX*pow(2,k);
    for(int i=0;i<n;i++)
        MAX+=array[i];
    cout << MAX << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}