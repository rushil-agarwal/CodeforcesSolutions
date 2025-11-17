#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str; cin >> str;
    int n = str.length();
    if(str.length() == 1){
        cout << 1 << endl;
        return;
    }

    bool opt1 = false, opt2 = false, opt3 = false, opt4 = false;

    for(int i=0; i<n-1; i++){
        if(str[i] == '*' && str[i+1] == '*')
            opt1 = true;
        else if(str[i] == '*' && str[i+1] == '<')
            opt2 = true;
        else if(str[i] == '>' && str[i+1] == '*')
            opt3 = true;
        else if(str[i] == '>' && str[i+1] == '<')
            opt4 = true;
    }

    if(opt1 || opt2 || opt3 || opt4){
        cout << -1 << endl;
        return;
    }
    
    int start = 0, end = 0;

    for(int i=0; i<n; i++){
        if(str[i] == '<')
            start++;
        else{
            start += (str[i] == '*');
            break;
        
        }
    }

    for(int i = n-1; i>=0; i--){
        if(str[i] == '>')
            end++;
        else{
            end += (str[i] == '*');
            break;
        }
    }

    cout << max(start, end) << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}