    #include<bits/stdc++.h>
    #define ll long long
    #define pii pair<int, int>
    #define tiii tuple<int, int, int>
    #define mod (int)(1e9+7)
    using namespace std;

    void solve(){
        int n, k; cin >> n >> k;
        string str; 
        cin >> str;

        int idx = -1, best = INT_MAX;
        vector<int> opens(n+1, 0), closes(n+1, 0);

        for(int i=0; i<n; i++){
            opens[i+1] = opens[i] + (str[i] == '(');
            closes[i+1] = closes[i] + (str[i] == ')');
        }

        for(int i=0; i<=n; i++){
            int opt1 = opens[i] + closes[n] - closes[i];

            if(opt1 < best){
                best = opt1;
                idx = i;
            }
        }

        int canDelete = min(k, best);
        string ans = string(n, '0');

        for(int i=0; i<idx; i++){
            if(canDelete == 0)
                break;

            if(str[i] == '('){
                ans[i] = '1';
                canDelete--;
            }
        }

        for(int i = n-1; i>=idx; i--){
            if(canDelete == 0)
                break;

            if(str[i] == ')'){
                ans[i] = '1';
                canDelete--;
            }
        }

        cout << ans << endl;


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