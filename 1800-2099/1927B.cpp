#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int counter =0;
    char  x= 'a';
    vector<pair<char,int>> vec;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            cout << static_cast<char>(x + counter);
            vec.push_back(make_pair(static_cast<char>(x + counter), 1));
            counter++;
        } else {
            int index;
            for(int j=0; j<vec.size(); j++){
                if(vec[j].second == arr[i]){
                    index = j;
                    vec[j].second++;
                    break;
                }
            }
            cout << vec[index].first;
        }
    }
    cout << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}