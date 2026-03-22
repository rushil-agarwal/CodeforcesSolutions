#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

int ask(int i, int j){
    cout << "? " << i << ' ' << j << endl;
    int reply; cin >> reply;

    return reply;
}

void solve(){
    int n; cin >> n;

    int curr = 1;
    for(int i=0; i<n-2; i++){
        int a = curr, b = curr+1;
        curr+=2;
        int r = ask(a, b);

        if(r == 1){
            cout <<  "! " << a << endl;
            return;
        }

    }

    int a = curr, b = curr+1, c = curr+2, d = curr+3;

    if(ask(a, b) == 1)
        cout << "! " << a << endl;
    else if(ask(b, c) == 1)
        cout << "! " << b << endl;
    else if(ask(c, a) == 1)
        cout << "! " << c << endl;
    else
        cout << "! " << d << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}