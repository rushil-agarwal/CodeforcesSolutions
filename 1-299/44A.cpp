#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    string leaves[n];
    set<string> collected;
    for(int i=0;i<n;i++){
        getline(cin, leaves[i]);
        collected.insert(leaves[i]);
    }

    for (set<string>::iterator itr = collected.begin();itr != collected.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << collected.size() << endl;
    return 0;
}