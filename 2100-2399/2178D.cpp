#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(pair<long long, int> &a, pair<long long, int> &b){
    return a.first < b.first;
}

void solveOne(int n, vector<pair<long long, int>> &elves){
    cout << n-1 << endl;
    for(int i=0; i<n-1; i++){
        cout << elves[i].second << " " << elves[i+1].second << endl;
    }
}

void solveZero(int n, vector<pair<long long, int>> &elves){
    long long bossHP = elves[n-1].first;
    int bossIdx = elves[n-1].second;
    long long currentSum = 0;
    int k = -1;

    for(int i=n-2; i>=0; i--){
        currentSum += elves[i].first;
        if(currentSum >= bossHP){
            k = i;
            break;
        }
    }

    if(k == -1){
        cout << -1 << endl;
        return;
    }

    cout << n-1 << endl;
    for(int i=0; i<k; i++){
        cout << elves[i].second << " " << elves[i+1].second << endl;
    }
    for(int i=k+1; i<n-1; i++){
        cout << elves[i].second << " " << bossIdx << endl;
    }
    cout << elves[k].second << " " << bossIdx << endl;
}

void solveMulti(int n, int m, vector<pair<long long, int>> &elves){
    if(n < 2*m){
        cout << -1 << endl;
        return;
    }
    cout << n - m << endl;
    for(int i=0; i<n - 2*m; i++){
        cout << elves[i].second << " " << elves[i+1].second << endl;
    }
    for(int i=0; i<m; i++){
        cout << elves[n - m + i].second << " " << elves[n - 2*m + i].second << endl;
    }
}

void solve(){
    int n, m; cin >> n >> m;
    vector<pair<long long, int>> elves;

    for(int i=0; i<n; i++){
        long long val; cin >> val;
        elves.push_back({val, i+1});
    }

    sort(elves.begin(), elves.end(), comp);

    if(m == n){
        cout << -1 << endl;
    } else if(m == 1){
        solveOne(n, elves);
    } else if(m == 0){
        solveZero(n, elves);
    } else {
        solveMulti(n, m, elves);
    }
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}