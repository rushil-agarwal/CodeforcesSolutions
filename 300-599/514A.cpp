#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(i==0 && s[i] == '9')
            continue;
        if((9 - (s[i]-'0')) <5)
            s[i] = 9 - (s[i]-'0') + '0';
    }
//    int cnt=0;
//    for(int i=0; i<s.length(); i++) {
//        if (s[i] == '0')
//            cnt++;
//        else
//            break;
//    }
//    s.erase(0, cnt);
    cout << s << endl;
}