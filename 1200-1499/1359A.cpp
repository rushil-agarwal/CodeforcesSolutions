#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    float total, jokers,players;
    cin >> total >> jokers >> players;
    float cards = total/players;
    float assigned[2];
    assigned[0] = min(cards,jokers);
    jokers = jokers - assigned[0];
    float x = jokers/(players-1);
    assigned[1] = ceil(x);
    cout << assigned[0] - assigned[1] << endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}