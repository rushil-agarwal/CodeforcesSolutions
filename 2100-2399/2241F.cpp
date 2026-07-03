#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    string str; cin >> str;


    bool flag = false;
    int ones=0, zero=0;

    for(int i=0; i<n; i++){
        if(str[i] == '1')
            ones++;
        else {
            if(ones&1){
                flag = true;
                break;
            }
        }
    }

    if(!flag){

        for(int i=n-1; i>=0; i--){
            if(str[i] == '0')
                zero++;
            else {
                if(zero&1){
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag)
        cout << "Alice\n";
    else
        cout << "Bob\n";
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