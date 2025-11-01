#include<bits/stdc++.h>
using namespace std;

long long funct(int idx, vector<long long> &nums, vector<long long> &cost, vector<long long> &dp){
    if(idx == nums.size())
        return 0;

    if(dp[idx] != -1)
        return dp[idx];

    // long long ans = LLONG_MAX;
    // if(i != 0){
    //     //if prev was kept, can only keep cureent if value greater else change
        
    //     //if prev was not kept, can keep current regardless
    
    
    //     //condition to keep
    //     if(nums[i-1] <= nums[i] || changed)
    //         ans = min(ans, funct(i+1, false, nums, cost));

    //     ans = min(ans, cost[i] + funct(i+1, true, nums, cost));
    
    // } else {
    //     //on zero index, can keep or change
    //     //keep
    //     ans = min(ans, funct(i+1, false, nums, cost));

    //     //change to anything
    //     ans = min(ans, cost[i] + funct(i+1, true, nums, cost));
    // }

    // return ans;

    long long ans = cost[idx];

    for(int i = 0; i<idx; i++){
        if(nums[i] <= nums[idx])
            ans = max(ans, funct(i, nums, cost, dp) + cost[idx]);
    }

    return dp[idx] = ans;
}

void solve(){
    int n; cin >> n;
    vector<long long> nums(n), cost(n);

    for(int i=0; i<n; i++)
        cin >> nums[i];

    for(int i=0; i<n; i++)
        cin >> cost[i];

    vector<long long> dp(n, -1);

    long long total = accumulate(cost.begin(), cost.end(), 0LL);
    long long maxSave = 0;

    for(int i = 0; i<n; i++){
        maxSave = max(maxSave, funct(i, nums, cost, dp));
    }

    

    cout << total - maxSave << endl;
    
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}