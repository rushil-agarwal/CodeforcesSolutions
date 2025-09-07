#include<iostream>
using namespace std;

int main(){
    string s[21];
    for(int i=0; i<21; i++){
        cin >> s[i];
    }

    int cnt1=0; int cnt0=0;
    for(int i=0; i<21; i++){
        for(int j=0; j<21; j++){
            if(s[i][j] == '0')
                cnt0++;
            else
                cnt1++;
        }
    }
    cout << max(cnt0, cnt1) - min(cnt0,cnt1) + 1<< endl;
}