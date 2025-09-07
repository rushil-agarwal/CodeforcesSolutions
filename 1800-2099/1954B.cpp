#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec;
    map<int, int> map;

    for(int i=0; i<n; i++){
        int x;cin >> x;
        vec.push_back(x);
        map[x]++;
    }

    if(map.size() == 1){
        cout << "-1" << endl;
        return;
    }

    int index =0;
    int result=n;
    for(int i=0; i<n; i++){
        if(vec[i] == vec[0]){
            index++;
        }else {
            result = min(result,index);
            index=0;
        }
    }
    result = min(result, index);
    cout << result << endl;
}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
