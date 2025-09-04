#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n,k ;
    cin>>n>>k;

    ll L=max(k-n,1LL),R=(k-1)/2;
    cout<<max(R-L+1,0LL)<<"\n";
    return 0;
}
