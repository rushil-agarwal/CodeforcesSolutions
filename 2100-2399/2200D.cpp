#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

void solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> middle, before, after;

    int start = n+1, idx = -1;

    for(int i=0; i<n; i++){
        int temp; cin >> temp;

        if(i < x)
            before.push_back(temp);
        else if(i >= x && i < y){
            middle.push_back(temp);
            if(temp < start){
                start = temp;
                idx = i-x;
            }
        }
        else if(i >= y)
            after.push_back(temp);
    }

    
    int middleSize = middle.size();
    vector<int> newMid(middleSize);
    for(int i=0; i<middleSize; i++){
        newMid[i] = middle[(idx+i)%middleSize];
    }

    vector<int> rest;

    for(int i=0; i<x; i++)
        rest.push_back(before[i]);
    for(int i=y; i<n; i++)
        rest.push_back(after[i-y]);

    int restSize = rest.size();
    int temp = -1;
    for(int i=0; i<restSize; i++){
        if(rest[i] > start){
            temp = i;
            break;
        }
    }

    if(temp == -1)
        temp = restSize;

    for(int i=0; i<temp; i++)
        cout << rest[i] << " ";

    for(auto it: newMid)
        cout << it << " ";

    for(int i=temp; i<restSize; i++)
        cout << rest[i] << " ";

    cout << "\n";
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