#include <iostream>
using namespace std;
int main(){
    string line1, line2, line3;
//    cin >> line1 >> line2 >> line3;
    getline(cin, line1);
    getline(cin, line2);
    getline(cin, line3);
    int a =0; int b=0; int c=0;
    for(int i=0; i<line1.length();i++){
        if(line1[i] == 'a' || line1[i] == 'e' || line1[i] == 'i' || line1[i] == 'o' || line1[i] == 'u'){
            a++;
        }
    }

    for(int i=0; i<line2.length();i++){
        if(line2[i] == 'a' || line2[i] == 'e' || line2[i] == 'i' || line2[i] == 'o' || line2[i] == 'u'){
            b++;
        }
    }

    for(int i=0; i<line3.length();i++){
        if(line3[i] == 'a' || line3[i] == 'e' || line3[i] == 'i' || line3[i] == 'o' || line3[i] == 'u'){
            c++;
        }
    }
    if(a == 5 && b == 7 && c == 5){ cout << "YES" << endl;}
    else{cout << "NO" << endl;}
    return 0;
}