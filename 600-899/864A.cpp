#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin >>t;
    vector<ll> vec,vec2;
    ll temp;
    for(int i=0;i<t;i++){
        cin >>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    ll unique=1;
    for(int i=0;i<t-1;i++){
        if(vec[i] != vec[i+1]){
            vec2.push_back(vec[i]);
            vec2.push_back(vec[i+1]);
            unique++;
        }
    }
    if(unique!=2){
        cout << "NO" << endl;
        return 0;
    }
    ll x=0; ll y=0;
    for(int i=0;i<t;i++){
        if(vec[i] == vec2[0])
            x++;
        else
            y++;
    }
    if(x!=y)
        cout << "NO" << endl;
    else{
        cout << "YES" <<endl << vec2[0] << " " << vec2[1] << endl;
    }

    return 0;
}