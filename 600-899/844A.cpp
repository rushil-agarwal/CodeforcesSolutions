#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    string s;
    cin >> s;
    ll n;
    cin >> n;
    if(n>s.size()){
        cout << "impossible" << endl;
        return 0;
    } else {
        unordered_set<char> a;
        for (int i = 0; i < s.size(); i++)
            a.insert(s[i]);

        if(a.size()<n)
            cout << n-a.size() << endl;
        else
            cout << "0" << endl;
        return 0;
    }
}