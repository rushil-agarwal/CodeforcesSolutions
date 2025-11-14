#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, x; cin >> n >> k >> x;
    vector<long long> positions(n);

    for(int i=0; i<n; i++)
        cin >> positions[i];

    positions.push_back(-1e9);
    positions.push_back(1e9);
    n+=2;
    sort(positions.begin(), positions.end());

    // if(positions[0] != 0){
    //     positions.insert(positions.begin(), 0);
    //     n++;
    // }

    // if(positions[n-1] != x){
    //     positions.push_back(x);
    //     n++;
    // }

    long long left = 0, right = x+1;
    long long minTime = 0;
    while(left + 1 < right){
        long long mid = left + (right - left)/2;
        
        long long canPlace = 0;

        positions[0] = -mid;
        positions[n-1] = x + mid;

        for(int i = 1; i<n; i++){
            canPlace += max(0LL, (long long)((positions[i]-mid) - (positions[i-1]+mid) + 1));
        }

        if(canPlace >= k)
            left = mid;
        else
            right = mid;
    }

    positions[0] = -left;
    positions[n-1] = x + left;
    long long j =0;

    for(int i = 1; i<n; i++){
        for(j = max(j, positions[i-1]+left); (j <= min(x, positions[i]-left)) && k ; j++){
            cout << j << " ";
            k--;
        }
    }

    cout << endl;

}
    
int main(){

    long t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}