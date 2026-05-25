    #include<bits/stdc++.h>
    #define ll long long
    #define pii pair<int, int>
    #define tiii tuple<int, int, int>
    #define mod (int)(1e9+7)
    using namespace std;

    void solve(){
        int n; cin >> n;

        set<int> store;
        int cnt = 1;
        int prev = 0;
        for(int i=0; i<n; i++){
            while(store.count(cnt) || store.count(cnt+prev))
                cnt++;

            cout << cnt << " ";
            store.insert(cnt);
            store.insert(cnt+prev);
            prev = cnt;
        }

        cout << endl;
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