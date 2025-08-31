#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int nume=0;int deno = a-2;
    for(int base=2;base<a;base++){
        int n=a; int digits=0;
        while(n!=0){
            digits+=n%base;
            n=n/base;
        }
        nume+=digits;
    }
    for(int i=min(nume,deno);i>=2;i--){
        if(nume%i ==0 && deno%i==0){
            nume = nume/i;
            deno = deno/i;
        }
    }

    cout << nume << "/" << deno << endl;

}