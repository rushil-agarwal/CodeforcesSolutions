#include<iostream>
using namespace std;

string compare(string same, string diff, string third){
    string nowin = "?";
    if(diff == "rock" && same == "scissors"){return third;}
    else if(diff == "scissors" && same == "paper"){return third;}
    else if(diff == "paper" && same == "rock"){return third;}
    return nowin;

}

int main(){
    string f,m,s;
    cin >> f >> m >> s;
    if(f==m){
        string third = "S";
       cout << compare(f,s,third) << endl;
    } else if(m==s){
        string third = "F";
        cout << compare(m,f,third) << endl;
    } else if(s==f){
        string third = "M";
        cout << compare(s,m,third) << endl;
    } else {
        cout << "?" << endl;
    }
    return 0;
}