#include<vector>
#include<iostream>
using namespace std;

bool solve(){
    int x,y; cin >> x >> y;
    vector<vector<int>> vec1(x, vector<int>(y)), vec2(x, vector<int>(y));
//    int vec1[x][y], vec2[x][y];

    for(int i=0; i<x; i++){
        string temp; cin >> temp;
        for(int j=0; j<temp.length(); j++)
            vec1[i][j] = temp[j]-'0';
    }

    for(int i=0; i<x; i++){
        string temp; cin >> temp;
        for(int j=0; j<temp.length(); j++)
            vec2[i][j] = temp[j]-'0';
    }

    for(int i=0; i<x; i++){
        int one=0, two=0;
        for(int j=0; j<y; j++){
            one+=vec1[i][j];
            two+=vec2[i][j];
        }
        one = one%3;
        two = two%3;
        if(one != two){
            return false;
        }
    }

    for(int i=0; i<y; i++){
        int one=0, two=0;
        for(int j=0; j<x; j++){
            one+=vec1[j][i];
            two+=vec2[j][i];
        }
        one = one%3;
        two = two%3;
        if(one != two){
            return false;
        }
    }

    return true;
}

int main(){
    int t; cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}