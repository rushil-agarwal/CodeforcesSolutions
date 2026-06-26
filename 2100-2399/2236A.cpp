    #include<bits/stdc++.h>
    #define ll long long
    #define pii pair<int, int>
    #define tiii tuple<int, int, int>
    #define mod (int)(1e9+7)
    using namespace std;

    void solve(){
        int n; cin >> n;
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            maxi = max(maxi, x);
            mini = min(mini, x);
        }
        cout << maxi - mini + 1 << "\n";

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