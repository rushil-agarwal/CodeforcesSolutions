#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        vec1.push_back(temp);
    }
    sort(vec1.begin(), vec1.end());

    int ans=0; int days=0;
    for(int i=0;i<n;i++){
        if(days<=k){
            ans++;
            days+=vec1[i];
        }
    }
    cout << ans << endl;
    for(int i=0;i<ans;i++){
        cout << vec1[i] << " ";
    } cout << endl;

    return 0;
}