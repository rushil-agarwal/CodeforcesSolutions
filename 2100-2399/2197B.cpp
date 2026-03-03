#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> position(n+1), a(n);

    for(int i=0; i<n; i++){
        int num; cin >> num;
        position[num] = i;
    }

    for(int i=0; i<n; i++)
        cin >> a[i];

    bool flag = true;


    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1])
            continue;

        if(position[a[i]] > position[a[i+1]]){
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";


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