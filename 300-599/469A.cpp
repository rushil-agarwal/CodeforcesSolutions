#include <iostream>
using namespace std;
int main() {
    int n, X,Y,x,y;
    int result =1;
    cin >> n;
    int array[n] = {0};

    cin >> X;
    for(int i=0; i<X; i++){
        cin >> x;
        array[x-1]=1;
    }

    cin >> Y;
    for(int i=0; i<Y; i++){
        cin >> y;
        array[y-1]=1;
    }

    for(int i=0; i<n; i++){
        if(array[i] == 1){
                result=1;
        } else {
            result =0;
            break;
        }
    }

    if(result == 1){
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}