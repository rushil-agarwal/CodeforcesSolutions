#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
int INF = 1e9;
using namespace std;

void fillPrime(int n, set<int>& primes) {

    primes.insert(1);

    if (n < 2) return;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;  

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            primes.insert(i);
    }
}

void solve(){
    int n; cin >> n;
    vector<bool> nums(n+1);

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        nums[temp] = true;
    }

    vector<int> dp(n+1, INF);
    dp[1] = 0;

    for(int number = 1; number <= n; number++){
        if(!nums[number])
            continue;

        for(int i = number; i<=n; i+=number){
            if(dp[i/number] != INF){
                dp[i] = min(dp[i], dp[i/number] + 1);
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(i == 1){
            if(nums[i])
                cout << 1 << ' ';
            else
                cout << -1 << ' ';
        } else {
            if(dp[i] == INF)
                cout << -1 << ' ';
            else
                cout << dp[i] << ' ';
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