#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,m,q; cin >> n >> m >> q;
    vector<int> teachers(m), david(q);
    for(int i=0; i<m; i++)
        cin >> teachers[i];
    for(int i=0; i<q; i++)
        cin >> david[i];

    sort(teachers.begin(), teachers.end());

    for(int x: david){
        int temp2=m-1;
        for(int i=0; i<m; i++){
            if(teachers[i] > x){
                temp2 = i;
                break;
            }
        }
        if(temp2 == 0){
            //all ahead
            cout << teachers[0]-1 << endl;
        } else if(temp2 == m-1){
            //all before
            cout << n - teachers[m-1] << endl;
        } else {
            //in between
            int dist = teachers[temp2] - teachers[temp2 - 1] - 1;
            if (dist % 2 == 0)
                cout << dist / 2 << endl;
            else {
                cout << dist / 2 + 1 << endl;
            }
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