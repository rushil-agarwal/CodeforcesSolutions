#include <iostream>

using namespace std;
void jump(int time, int height[]);
void eatNut(int time, int height[]);
void goUp(int time, int height[]);

int n; int x=0;

void jump(int time, int height[]){
    if(x=n-1){
        cout << time << endl;
    }
    else {
        if (height[x] > height[x + 1]) {
            time+=1;
            x++;
            time+=1;
            goUp(time, height);
        }
        else if (height[x] <= height[x + 1]) {
            x++;
            time+=1;
            eatNut(time, height);
        }
    }
    goUp(time,height);
}

void eatNut(int time, int height[]){
    time+=1;
    jump(time, height);
}

void goUp(int time, int height[]){
    time+=1;
    eatNut(time, height);
}

int main(){
    int time=0;
    cin >> n;
    int height[n];
    for(int i=0;i<n;i++){ cin >> height[i];}
    goUp(time, height);
}