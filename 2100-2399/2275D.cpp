#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define tllll tuple<ll, ll, ll, ll>
#define mod (int)(1e9+7)
using namespace std;

bool check(ll mid, ll k, vector<tllll> &vec){

    ll cnt = 0;

    for(auto &[sum, a, b, c]: vec){
        if(sum >= mid)
            break;

        ll need = mid - sum;

        if(a == b && b == c)
            return false;

        if(a <= b && b <= c){
            cnt += need + 2*min(b-a, c-b) + 2;
        } else 
            cnt += need;

        if(cnt > k)
            return false;
    }

    return cnt <= k;

}

void solve(){
    int n; cin >> n;
    ll k; cin >> k;

    vector<tllll> vec;

    ll left = LLONG_MAX, right, ans;

    for(int i=0; i<n; i++){
        ll a, b, c;  cin >> a >> b >> c;
        vec.push_back({a+b+c, a, b, c});
        left = min(left, a+b+c);
    }

    right = left+k;
    ans = left;

    sort(vec.begin(), vec.end());

    while(left <= right){
        ll mid = (left+right)/2;

        if(check(mid, k, vec)){
            ans = mid;
            left = mid+1;
        } else 
            right = mid-1;
    }

    // cout << "ANS: " << ans << endl;




    cout << ans << "\n";
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