#include<iostream>
#include<vector>
using namespace std;

int main(){
    string first,last;
    cin >> first >> last;
    vector<char> result;
    result.push_back(first[0]);
    for(int i=1;i<first.size();i++){
        if((int)first[i] < (int)last[0]){
            result.push_back(first[i]);
        } else {
            break;
        }
    }
    result.push_back(last[0]);
    for(int i=0;i<result.size();i++){
        cout << result[i];
    }
    return 0;
}