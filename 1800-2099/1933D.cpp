#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n; cin >> n;
    vector<long> vec(n);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    if(vec[0] != vec[1])
        return true;

    for(int i=1; i<n; i++){
        if(vec[i]%vec[0] != 0)
            return true;
    }

    return false;

}

int main(){
    int t; cin >> t;
    while(t--) {
        if(solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}