#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

bool query(int u, int v, int d){
    cout << "? " << u << " " << v << " " << d << endl;
    bool ans; cin >> ans;
    return ans;
}

pii funct(int source, int start, int curr, int n){
    int bestNode = start, bestDist = curr;

    for(int i = 1; i <= n; i++){
        if(i == start)
            continue;


        if(!query(source, i, bestDist+1))
            continue;

        // iss distance pr node mil gaya
        bestDist++;

        while(query(source, i, bestDist+1))
            bestDist++;

        bestNode = i;
    }

    return {bestNode, bestDist};
}

void solve(){
    int n; cin >> n;

    pii firstQ = funct(1, 1, 0, n);
    pii secondQ = funct(firstQ.first, 1, firstQ.second, n);

    cout << "! " << firstQ.first << " " << secondQ.first << " " << secondQ.second << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}