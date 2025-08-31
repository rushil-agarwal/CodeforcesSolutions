#include <iostream>
using namespace std;
int main(){
    int participants, special;
    int passed=0;
    cin >> participants >> special;

    long long int score[participants];

    for(int i=0; i<participants; i++) {
        cin >> score[i];
    }
    for (int i=0; i<participants; i++){
        if(score[i] >= score[special -1] && score[i] > 0){
            passed = passed +1;
        }

    }
    cout << passed;
}