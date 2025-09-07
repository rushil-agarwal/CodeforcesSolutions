#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int areEqual(vector<ll> vec2, vector<ll>vec1, int n){
    for(int i=0;i<n;i++){
        if(vec2[i]!=vec1[i]){
            return 0;
        }
    }
    return 1;
}

vector<ll> operation(int n,vector<ll> vec1){
    vector<ll> vec2,vec3;
    for(int i=0;i<n;i++){
        if(vec1[i] <= vec1[n-1]){
            vec2.push_back(vec1[i]);
        } else if(vec1[i]>vec1[n-1]){
            vec3.push_back(vec1[i]);
        }
    }
    vec2.insert(vec2.end(), vec3.begin(),vec3.end());
    return vec2;
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> vec1,vec2,vec3;
    ll temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        vec1.push_back(temp);
    }
    int operations=0;
    int i=1;
    vec2=vec1;
    while(true){
        vec3=vec2;
        vec2 = operation(n,vec2);

        if(areEqual(vec2,vec3,n)){cout << operations << endl;return;}
        operations++;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}