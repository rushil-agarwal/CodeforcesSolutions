#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class object {
public:
    char bracket; int position, balance;
};

bool func1(const object &a,const object &b){
    return a.balance < b.balance;
}

bool func2(const object &a, const object &b){
    if(a.balance == b.balance)
        if((a.bracket == '(' && b.bracket == '(') || (a.bracket == '(' && b.bracket == ')') || (a.bracket == ')' && b.bracket == ')'))
        return a.position > b.position;
    return false;
}

void solve(){

    string s; cin >> s;
    int bal = 0;
    vector<object> vec;

    for(int i=0; i<s.length(); i++){
        object temp;
        temp.bracket = s[i];
        temp.position = i;
        temp.balance = bal;
        vec.push_back(temp);
        if(s[i] == '(')
            bal++;
        else
            bal--;
    }

    sort(vec.begin(), vec.end(), func1);

    sort(vec.begin(), vec.end(), func2);

    for(auto i : vec)
        cout << i.bracket;
    cout << endl;

}

int main(){

    int t=1;
    while(t--)
        solve();
    return 0;
}