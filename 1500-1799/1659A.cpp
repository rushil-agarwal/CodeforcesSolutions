#include<iostream>
using namespace std;

void solver(){
    int n, r, b;
    string result;
    cin >> n >> r >> b;
    int mina = r/(b+1);
    int cntb = r%(b+1);
    for(int i=0; i<b+1-cntb;i++){
        string temp(mina,'R');
        result+=temp;
        result+='B';
    }

    for(int i=0; i<cntb;i++){
        string temp(mina+1,'R');
        result+=temp;
        result+='B';
    }
    result.pop_back();
    cout << result << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }
}