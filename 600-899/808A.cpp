#include<iostream>
using namespace std;

// int solve(long long int n){
//     while(true){
//         int cnt=0;
//         n++;
//         string s = to_string(n);
//         for(int i=0; i<s.length();i++){
//             if(s[i] != '0'){cnt++;}
//         }
//         if(cnt == 1){return n;}
//     }
// }

int main(){
    long long int n; long long int a=1;
    cin >> n;
    while(a<=n){
        a=a*10;
    } 
    a=a/10;
    long long int b = a;
    while(b<=n){
        b+=a;
    }
    cout << b-n;
}