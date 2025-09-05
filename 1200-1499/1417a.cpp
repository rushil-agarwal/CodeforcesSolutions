#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    sort(vec1.begin(),vec1.end());
    int spells=0;
    for(int i=1;i<n;i++){

            while(vec1[i]+vec1[0]<=k){
                vec1[i]+=vec1[0];
                spells++;
            }

    }
    cout << spells << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}