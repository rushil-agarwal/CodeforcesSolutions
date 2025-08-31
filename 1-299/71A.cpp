#include <iostream>
using namespace std;
int main(){
    string word;
    int t;
    cin >> t;
    for(int a=0; a<t; a++) {
    cin >> word;
    if(word.size() >10) {
        cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
    } else {
        cout << word << endl;
    }
    }
}