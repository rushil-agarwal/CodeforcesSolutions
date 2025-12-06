#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> nums(n);

    for(auto &it:  nums)
        cin >> it;

    int first = nums[0], last = nums[n-1];

    if(first == -1 && last == -1){
        nums[0] = 0;
        nums[n-1] = 0;
    } else if(first == -1 && last != -1){
        nums[0] = last;
    } else if(first != -1 && last == -1){
        nums[n-1] = first;
    }

    cout << abs(-nums[0] + nums[n-1]) << endl;
    for(auto it: nums){
        cout << (it == -1 ? 0 : it) << " ";
    }


}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}