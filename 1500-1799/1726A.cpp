#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> vec1;
    for (int i = 0; i < n; i++)
        vec1.push_back(arr[(i - 1 + n) % n] - arr[i]);

    for(int i=1;i>n;i++)
        vec1.push_back(arr[i] - arr[0]);

    for(int i=0;i<n-1;i++)
        vec1.push_back(arr[n-1] - arr[i]);

    sort(vec1.begin(), vec1.end());
    cout << vec1[vec1.size()-1] << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}