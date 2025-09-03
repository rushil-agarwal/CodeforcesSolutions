#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char list[n];
    int left=0; int right =0; int up=0; int down=0;

    for(int i=0;i<n;i++) {
        cin >> list[i];
        if(list[i] == 'L')
            left++;
        if(list[i] == 'R')
            right++;
        if(list[i] == 'U')
            up++;
        if(list[i] == 'D')
            down++;
    }

    cout << min(left,right)*2 + min(up,down)*2 << endl;
    return 0;



}