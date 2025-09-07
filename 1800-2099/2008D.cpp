#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int temp; cin >> temp;
        vec.push_back(temp-1);
    }
    string color; cin >> color;
    vector<int> ans(n), visited(n,0);

   // cout << " AAAA " << endl;

    for(int i=0; i<n; i++){
        if(visited[i] == 0){ // if not visited
 //           cout << "I: " << i << endl;

            vector<int> path; //path it will follow to upadte values for all
            int blacks=0, index = i;

            while(visited[index] == 0){
                path.push_back(index);
                if(color[index] == '0') {
                    blacks++;
                }
                visited[index] = 1;
                index = vec[index];

            }

            for(auto j: path){
         //       cout << "YO" << endl;
                ans[j] = blacks;
            }

        }
    }

 //   cout << "BBBB" << endl;
    for(auto i: ans) {
        cout << i << " ";
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