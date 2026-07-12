#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    int negOnes = 0;
    while(negOnes < n && vec[negOnes] == -1)
        negOnes++;

    ll nums = 0, concecutives = 0, prev = LLONG_MAX;
    
    for(int i = negOnes; i<n;){
        nums++;
        if(prev == vec[i]-1)
            concecutives++;

        prev = vec[i];
//        cout << num << " " << concectives << endl;

        while(i<n && vec[i] == prev)
            i++;
    }

    ll power;

    if (negOnes == 0)
        power = n-nums;
    else
        power = n-nums - 1;

    ll ans = 1;

    for (int i = 0; i < power; i++)
        ans = (ans * 2)%mod;

    if (negOnes > 0)
        ans = ans*(concecutives+1)%mod;

    cout << ans << '\n';

//     ll ans =0;
//     if(negOnes == 0){
//         // only take positive from other numbers
//         ans = (1LL<<(n-nums))%mod;
//     } else {
//         // can take odd and even
//         ans = (1LL<<(n-nums-1));
//         ans = (ans*(concecutives+1))%mod;
//     }

//   //  cout << "ans: " << ans << endl;
//     cout << ans << endl;
    
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