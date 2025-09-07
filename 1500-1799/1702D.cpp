#include<iostream>
using namespace std;
string s;
string removeMax(string s){
    int max = s[0]-'a'+1;
    for(int i=1;i<s.length();i++){
        if((s[i]-'a'+1) > max)
            max = s[i]-'a'+1;
    }
    for (int i = 0; i < s.length(); i++)
        if ((s[i] - 'a' + 1) == max)
            s[i] = '\n';

    cout <<s <<endl;
    return s;
}

int pricer(string s){
    int price=0;
    for(int i=0;i<s.length();i++){
        price+=s[i]-'a'+1;
    }
    return price;
}

void solve(){

    cin >>s;
    int cost;
    cin >> cost;
    int price = pricer(s);
    cout << price;
    while(price<=cost){
        int price=0;
        s = removeMax(s);
        for(int i=0;i<s.length();i++){
            price+=s[i]-'a'+1;
        }
    }

    cout << s << endl;
    return;

}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}