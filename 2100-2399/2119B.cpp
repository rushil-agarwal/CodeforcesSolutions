#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int funct(vector<int> &vec){
    int ans = INT_MIN;
    for(auto &it: vec)
        ans = max(ans, it);

    return ans;
}

bool solve(){
    int n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    vector<int> vec(n), dp(n, -1);

    for(int i=0; i<n; i++)
        cin >> vec[i];

    double redq = distance(a, b, x, y);
    int maxDist = accumulate(vec.begin(), vec.end(), 0);
    int minDist = max(0, 2*funct(vec) - maxDist);
    //cout << maxDist << " " << minDist << endl;


    if(redq >= minDist && redq <= maxDist)
        return true;
    else
        return false;
}

int main(){

    ll t;
    cin >> t;
    while(t--){
        if(solve())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;}
    return 0;
}