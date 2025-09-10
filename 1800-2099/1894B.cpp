#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n,1);
    vector<vector<int>> c(101);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        c[a[i]].push_back(i);
    }

    int k =2;
    for(int i=1;i<101;i++){
        if(c[i].size() >= 2){
            b[c[i][0]] = k;
            k++;
            if(k>3)
                break;
        }

    }

    if(k<=3){
        cout << "-1" << endl;
        return;
    }
    for(int i=0; i<n; i++)
        cout << b[i] << " ";
    cout << endl;

}

int main(){

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}