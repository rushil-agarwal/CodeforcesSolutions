#include<iostream>
#include<vector>
using namespace std;

int isPrime(int x){
    if(x==1){return 0;}
    if(x==2){return 1;}
    for(int i=2;i<x;i++){
        if(x%i==0){return 0;}
    }
    return 1;
}

int prime(int x){
    int pd=0;
    vector<int> vec1;
    for(int i=2;i<x;i++){
        if(x%i==0){
            if(isPrime(i)){
                vec1.push_back(i);
                pd++;
            }
        }
    }
    if(pd==2){
        if(isPrime(vec1[0]) && isPrime(vec1[1])){return 1;}

    }
    return 0;
}

int main(){
    int a;
    cin >> a;
    int result=0;
    for(int i=1;i<=a;i++){
    if(prime(i)){
        result++;
    }

    }
    cout << result << endl;
    return 0;
}