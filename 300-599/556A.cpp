#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1=0;int cnt0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            cnt1++;
        if(s[i] == '0')
            cnt0++;
    }
    cout << n - min(cnt1,cnt0)*2 << endl;
    return 0;
}