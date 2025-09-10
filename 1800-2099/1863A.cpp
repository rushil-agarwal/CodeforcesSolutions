#include <iostream>
using namespace std;

void solver(){
    int subscribers,online,notifications;
    string s;
    int plus=0;
    cin >> subscribers >> online >> notifications >> s;

    for(int i=0; i<notifications;i++){
        if(s[i] == '+'){
            plus++;
        }
    }
    if(subscribers == online) {cout << "YES" << endl;} else{
    if(subscribers-online ==1){
        if(plus >=1){
            if(s[0] == '+'){
                cout << "YES\n";
            } else {
                cout << "MAYBE" << endl;
            }
        }
    } else{
    if(subscribers < online+plus){
        cout << "YES" << endl;
    } else if(subscribers == online + plus){
        cout << "MAYBE" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
}}

int main(){
    int t; cin >> t;
    while(t--){
        solver();
    }
}