#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    int val[n];
    vector<pair<int, int>> arr;
    for(int i=0; i<n; i++){
        cin >> val[i];
        arr.push_back(make_pair(val[i],i));
    }

    sort(arr.begin(), arr.end());

    int m; cin >> m;
    for(int i=0; i<m; i++){
        string str; cin >> str; bool ans = true;

        if(str.length() == n){
            for(int k=1; k<n; k++){
                if(arr[k].first == arr[k-1].first){
                    if(str[arr[k].second] !=str[arr[k-1].second]){
                        ans = false;
                        break;
                    }
                }
            }


            if(ans){
                vector<pair<char, int>> vec;
                for (int j = 0; j < n; j++) {
                    vec.push_back(make_pair(str[j], j));
                }
                sort(vec.begin(), vec.end());

                for (int k = 1; k < n; k++) {
                    if (vec[k].first == vec[k - 1].first) {
                        if (val[vec[k].second] != val[vec[k - 1].second]) {
                            ans = false;
                            break;
                        }
                    }
                }
            }

            if(ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        } else {
            cout << "NO" << endl;
        }
    }






}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}