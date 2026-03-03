#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<int> vec(11, 0);

    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        vec[temp]++;
    }

    for(int i=10; i>0; i--){
        if(vec[i] > 0){
            cout << vec[i] << "\n";
            return;
        }
    }

    
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