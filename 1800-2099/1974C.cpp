#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class object {
public:
    ll first, second, third;
};

void solve(){
    int n; cin >> n;
    ll arr[n];
    vector<object> vec;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int ans = 0;

    object temp;
    for(int i=0; i<n-2; i++){
        temp.first = arr[i];
        temp.second = arr[i+1];
        temp.third = arr[i+2];
        vec.push_back(temp);
    }

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-2; j++){
            int temp2=0;
            if(vec[i].first != vec[j].first)
                temp2++;
            if(vec[i].second != vec[j].second)
                temp2++;
            if(vec[i].third != vec[j].third)
                temp2++;

            if(temp2 == 1){
                ans++;
            }

        }
    }

    cout << ans << endl;



}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}