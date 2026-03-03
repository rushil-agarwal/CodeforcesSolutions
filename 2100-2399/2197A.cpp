#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

int digitSum(ll num){
    int sum=0;
    while(num > 0){
        sum += num%10;
        num /= 10;
    }

    return sum;
}

void solve(){
    ll num; cin >> num;
    int cnt=0;
    for(int i=1; i<=90; i++){
        if(digitSum(num+i) == i)
            cnt++;
    }

    cout << cnt << '\n';
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