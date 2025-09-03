#include<iostream>
using namespace std;


int main(){
    int size, diff;
    cin >> size >> diff;
    char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string password;
    line:
    for(int i=0; i<diff;i++){
        password.push_back(alphabets[i]);
        if(password.length() == size){break;}
        if(i == diff -1){goto line;}
    }
    cout << password;
    return 0;

}