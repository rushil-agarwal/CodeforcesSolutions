//INCOMPLETEcod

#include <iostream>
using namespace std;

int solve(){
    int participants,result;
    cin >> participants;
    int strength[participants];
    int endurance[participants];

    for(int i=0; i<participants; i++){
        cin >> strength[i] >> endurance[i];
    }

    for(int i=1; i<participants; i++){
        if(endurance[i]>=endurance[0] && strength[i]>=strength[0]){
            result = -1;
        } else {
            result =strength[0];
            break;
        }
        }

        return result;
}

int main(){

    int n;
    cin >> n;
    while(n--){
        int result;
        cout << solve() << endl;
    }
}