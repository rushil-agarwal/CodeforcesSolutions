#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    unordered_set<char> map;

    for(int i=0; i<s.length(); i++)
        map.insert(s[i]);

    vector<char> vec;

    for(auto it = map.begin(); it!=map.end(); it++){
        vec.push_back(*it);
    }
    sort(vec.begin(), vec.end());
    int index=0;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<vec.size(); j++){
            if(vec[j] == s[i])
                index = vec.size() -1 - j;
        }
        cout << vec[index];
    }
    cout << endl;



}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}