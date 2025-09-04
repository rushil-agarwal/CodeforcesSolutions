#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> vec1;
    for(int i=0;i<n;i++){
        ll temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    int count=0;
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<n-1;i++){
        if (vec1[i] + 1 != vec1[i + 1]) {
            count+=vec1[i+1] - vec1[i]-1;
        }
    }
    cout << count  << endl;
    return 0;
}