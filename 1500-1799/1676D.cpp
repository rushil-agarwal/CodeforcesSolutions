#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m;
    cin >> n >> m;
    ll matrix[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> matrix[i][j];
    ll sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll temp=0;
            ll x=i; ll y=j;
            while(x>=0 && x<n && y>=0 && y<m){
                temp+=matrix[x][y];
                x++; y++;
            }
            x=i;y=j;
            while(x>=0 && x<n && y>=0 && y<m){
                temp+=matrix[x][y];
                x--; y--;
            }
            x=i;y=j;
            while(x>=0 && x<n && y>=0 && y<m){
                temp+=matrix[x][y];
                x++; y--;
            }
            x=i;y=j;
            while(x>=0 && x<n && y>=0 && y<m){
                temp+=matrix[x][y];
                x--; y++;
            }
            temp-=matrix[i][j]*3;
            sum=max(sum,temp);
        }
    }
    cout << sum << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}