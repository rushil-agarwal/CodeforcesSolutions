#include<iostream>
#include<vector>
using namespace std;

void solve(int n){
    string s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    vector<string> names;
    names.push_back(s[0]);
    for(int i=0; i<n; i++){
        if(s[i] != names[0]){
            names.push_back(s[i]);
        }
    }
    int team1 =0; int team2=0;
    for(int i=0;i<n;i++){
        if(s[i] == names[0]){team1++;}
        else {team2++;}
    }
    if(team1>team2) { cout << names[0] << endl;}
    else {cout << names[1] << endl;}


}

int main(){
    int n;
    cin >> n;
    solve(n);
}