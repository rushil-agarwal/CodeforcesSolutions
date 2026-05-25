#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    ll need = 0;
    for(int i=0; i<n-1; i++)
        need = max(need, nums[i] - nums[i+1]);

    if(need == 0){
        cout << "YES\n";
        return;
    }

    bool flag = true;
    int canChange = 0;

    for(int i=0; i<n-1; i++){
        if(nums[i+1] - nums[i] >= need){
            canChange = 0;
        } else if(nums[i] > nums[i+1]){
            canChange++;

            if(canChange > 1){
                flag = false;
                break;
            }
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