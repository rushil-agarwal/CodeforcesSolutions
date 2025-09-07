#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    double n,d;
    cin >> n >> d;
    vector<double> vec;
    for(int i=0;i<n;i++) {
        double x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    double ans=0;
    int players = n;
    for(int i = n-1; i>=0;i--){
        int temp = (d/vec[i] + 1);
        players-=temp;
        if(players>=0 && temp*vec[i] > d)
            ans++;
        else
            break;
    }
    cout << ans << endl;

}

int main(){

    ll t=1;
    while(t--)
        solve();
    return 0;
}