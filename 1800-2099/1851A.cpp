#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int func1(int diff, int steps, int height){
    for(int i=1;i<steps;i++)
        if(diff == i*height)
            return 1;

    return 0;
}

void solve(){
    ll people, steps, height, vlad;
    cin >> people >> steps >> height >> vlad;
    ll heights[people];
    for(int i=0;i<people;i++)
        cin >> heights[i];

    ll ans=0;
    for(int i=0;i<people;i++){
        if (func1(abs(heights[i] - vlad), steps, height))
            ans++;

    }
    cout << ans << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}