#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n, diff;
    cin >> n >> diff;
    long long int a[n];
    vector<int> vec1,vec2;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int temp1;
    for(int i=0;i<n;i++){
        cin >> temp1;
        vec1.push_back(temp1);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<vec1.size()+1;j++){
            if(abs(a[i]-vec1[j]) <=diff){
                vec2.push_back(vec1[j]);
                int temp = vec1[j];
                vec1[j] = vec1[vec1.size()];
                vec1[vec1.size()] = temp;
                vec1.pop_back();
                break;

            }
        }
    }

    for(int i=0; i<vec2.size();i++){
        cout << vec2[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}