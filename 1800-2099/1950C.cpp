#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin >> s;
    bool time = true;
    int hour = (s[0]-'0')*10 + s[1]-'0';
    int minute = (s[3]-'0')*10 + s[4]-'0';
    if(hour >= 12)
        time = false;
    if(hour <= 12){
        if(hour <10){
            if(hour == 0){
                cout << 12 << ":";
            } else
            cout << "0" << hour << ":";
        } else {
            cout << hour << ":";
        }
    } else {
        hour-=12;
        if(hour <10){
            cout << "0" << hour << ":";
        } else {
            cout << hour << ":";
        }
    }

    if(minute < 10){
        cout << "0" << minute << " ";
    } else {
        cout << minute << " ";
    }
    if(time)
        cout << "AM" << endl;
    else
        cout << "PM" << endl;

}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}