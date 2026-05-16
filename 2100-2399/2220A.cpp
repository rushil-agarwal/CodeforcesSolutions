#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end(), greater<int>());

    for(int i=0; i<n-1; i++){
        if(nums[i] == nums[i+1]){
            cout << "-1\n";
            return;
        }
    }
    for(auto it: nums)
        cout << it << " ";
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