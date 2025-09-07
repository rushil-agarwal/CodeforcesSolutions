#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt1=0; int cnt0=0;
        string s;
        cin >> s;
        for(int i=0; i<s.length();i++){
            if(s[i] == '1'){
                cnt1++;
            } else if(s[i] == '0'){
                cnt0++;
            }
        }

        if(cnt1 == cnt0){
            cout << cnt1-1 << endl;
        }
        else if(cnt1 > cnt0){cout << cnt0 << endl;}
        else {cout << cnt1 << endl;}
    }
}