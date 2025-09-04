#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char previous = s[0];
    int sum = s[0]-'a'+1;
    k--;
    for(int i=1;i<n;i++){
        if(k==0){
            break;
        }
        if(s[i] - previous >=2){
            previous = s[i];
            sum+=s[i]-'a'+1;
            k--;
        }
    }
    if(k!=0){cout << "-1" << endl;}
    else {
        cout << sum << endl;
    }
}