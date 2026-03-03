#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n;
    cin >> n;
    string str; cin >> str;

    int one=0, zero=0;
    for(int i=0; i<n; i++){
        if(str[i] == '1')
            one++;
        else
            zero++;
    }

    if((one&1) && (zero%2 == 0)){
        cout << "-1\n";
        return;
    }

    if(zero&1){
        cout << zero << '\n';
        for(int i=0; i<n; i++){
            if(str[i] == '0')
                cout << i+1 << ' ';
        }
    } else {
        cout << one << '\n';
        for(int i=0; i<n; i++){
            if(str[i] == '1')
                cout << i+1 << ' ';
        }
    }

    cout << '\n';
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