#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    string known; cin >> known;

    known = " " + known;

    vector<ll> a(n+1, 0), c(n+1, 0);

    for(int i=1; i<=n; i++)
        cin >> a[i];

    for(int i=1; i<=n; i++)
        cin >> c[i];

    vector<bool> fixed(n+1, false);
    vector<ll> b(n+1, 0);

    fixed[0] = true;
    c[0] = -1e17;
    
    for(int i=1; i<=n; i++){
        if(c[i] != c[i-1]){
            // whenever max value changes
            if(c[i] < c[i-1]){
                // if less than, then not possible 
                cout << "NO\n";
                return;
            }

            //fix b[i]

            b[i] = c[i];
            fixed[i] = true;

            for(int j = i; j>=0; j--){
                // back propogate to fix b[j] wherever possible, stop when we see unknowns
                if(known[j] == '1'){
                    // safety check
                    if(fixed[j-1] && b[j] != b[j-1] + a[j]){
                        cout << "NO\n";
                        return;
                    }
                    
                    b[j-1] = b[j] - a[j];
                    fixed[j-1] = true;

                } else 
                    break;
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(known[i] == '1'){
            b[i]=b[i-1] + a[i];
            fixed[i] = true; 
        }

        if(!fixed[i])
            b[i] = -1e17;

        a[i] = b[i] - b[i-1];

        if(max(b[i], c[i-1]) != c[i]){
            cout << "NO\n";
            return;
        }
    }

    cout <<"YES\n";
    for(int i=1; i<=n; i++)
        cout << a[i] << " ";
    cout << '\n';;

    
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