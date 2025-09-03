#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int isPalindrome(int hour, int minute){
    if(hour/10 == minute%10 && hour%10 == minute/10)
        return 1;
    return 0;
}

int main(){
    string s;
    cin >> s;
    int hour,minute,ans=0;
    hour = (s[0]-'0')*10 + (s[1] - '0');
    minute = (s[3]-'0')*10 + (s[4]-'0');
    while(isPalindrome(hour,minute) != 1){
        minute++;
        if(minute == 60){
            minute = 0;
            hour++;
        }
        if(hour == 24){
            hour = 0;
        }
        ans++;
    }
    cout << ans <<endl;
    return 0;
}