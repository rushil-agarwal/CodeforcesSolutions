#include <iostream>
using namespace std;

int x=0;

void function1(string s){
    for(int i=0; i<10;i++){
        if(s[i] =='X'){
            x+=1;
        }
    }
}

void function2(string s){
    for(int i=0;i<10; i++){
        if(s[i] == 'X'){
            if(i == 0 | i==9){
                x+=1;
            } else {
                x+=2;
            }
        }
    }
}

void function3(string s){
    for(int i=0; i<10; i++){
        if(s[i] =='X'){
            if(i==0 | i== 9){
                x+=1;
            } else if(i==1 | i==8){
                x+=2;
            } else {
                x+=3;
            }
        }
    }
}

void function4(string s){
    for(int i=0; i<10; i++){
        if(s[i] =='X'){
            if(i==0 | i==9){
                x+=1;
            } else if(i==1 | i==8){
                x+=2;
            } else if(i==2 | i==7){
                x+=3;
            } else {
                x+=4;
            }
        }
    }
}

void function5(string s){
    for(int i=0; i<10; i++){
        if(s[i] =='X'){
            if(i==0 | i==9){
                x+=1;
            } else if(i==1 | i==8){
                x+=2;
            } else if(i==2 | i==7){
                x+=3;
            } else if(i==3 | i==6){
                x+=4;
            } else {
                x+=5;
            }
        }
    }
}


void solver(){
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10;

    cin >> line1 >> line2 >> line3 >> line4 >> line5 >> line6 >> line7 >> line8 >> line9 >> line10;
    function1(line1); function1(line10);
    function2(line2); function2(line9);
    function3(line3); function3(line8);
    function4(line4); function4(line7);
    function5(line5); function5(line6);
    cout << x << endl;
    x=0;
}


int main(){
    int t;
    cin >> t;
    while(t>0){
        solver();
        t--;
    }
    return 0;
}