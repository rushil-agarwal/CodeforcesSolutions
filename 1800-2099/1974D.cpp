#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int x; cin >> x;
    string str; cin >> str;
    if(x%2){
        cout << "NO" << endl;
        return;
    }

    int n=0, s=0, e=0, w=0;
    for(int i=0; i<x; i++){
        if(str[i] == 'N')
            n++;
        else if(str[i] == 'S')
            s++;
        else if(str[i] == 'E')
            e++;
        else
            w++;
    }

    int cancelNS = 2*min(n,s);
    int cancelEW = 2*min(e,w);
    int turn=0; int turn2=0;
    vector<char> vec;
    for(int i = 0; i<x; i++){
        if(str[i] == 'N'){
            if(n<=0){
                cout << "NO" << endl;
                return;
            } else {
                if(cancelNS > 0){
                    if(turn){
                        vec.push_back('R');
                        turn=0;
                        cancelNS--;
                        n--;
                    } else {
                        vec.push_back('H');
                        turn = 1;
                        cancelNS--;
                        n--;
                    }
                } else {
                    if(turn2){
                        vec.push_back('R');
                        turn2 =0;
                        n--;
                    } else {
                        vec.push_back('H');
                        turn2 = 1;
                        n--;
                    }
                }
            }
        } else if(str[i] == 'S'){
            if(s<=0){
                cout << "NO" << endl;
                return;
            } else {
                if (cancelNS > 0) {
                    if(turn){
                        vec.push_back('R');
                        turn=0;
                        cancelNS--;
                        s--;
                    } else {
                        vec.push_back('H');
                        turn = 1;
                        cancelNS--;
                        s--;
                    }
                } else {
                    if (turn2) {
                        vec.push_back('R');;
                        turn2 = 0;
                        s--;
                    } else {
                        vec.push_back('H');;
                        turn2 = 1;
                        s--;
                    }
                }
            }

        } else if(str[i] == 'E'){
            if(e<=0){
                cout << "NO" << endl;
                return;
            } else {
                if (cancelEW > 0) {
                    if(turn){
                        vec.push_back('R');
                        turn=0;
                        cancelEW--;
                        e--;
                    } else {
                        vec.push_back('H');
                        turn = 1;
                        cancelEW--;
                        e--;
                    }
                } else {
                    if (turn2) {
                        vec.push_back('R');;
                        turn2 = 0;
                        e--;
                    } else {
                        vec.push_back('H');;
                        turn2 = 1;
                        e--;
                    }
                }
            }
        } else {
            if(w<=0){
                cout << "NO" << endl;
                return;
            } else {
                if (cancelEW > 0) {
                    if(turn){
                        vec.push_back('R');
                        turn=0;
                        cancelEW--;
                        w--;
                    } else {
                        vec.push_back('H');
                        turn = 1;
                        cancelEW--;
                        w--;
                    }
                } else {
                    if (turn2) {
                        vec.push_back('R');;
                        turn2 = 0;
                        w--;
                    } else {
                        vec.push_back('H');;
                        turn2 = 1;
                        w--;
                    }
                }
            }
        }
    }

    for(auto i: vec)
        cout << i;
    cout << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}