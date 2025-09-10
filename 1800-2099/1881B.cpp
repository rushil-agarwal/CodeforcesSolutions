#include<iostream>
#include<vector>
using namespace std;

vector<long long int> func1(vector<long long int> vec1){

    if(vec1[0]<vec1[1]){
        long long int temp = vec1[0];
        vec1[0] = vec1[1];
        vec1[1] = temp;
    }
    if(vec1[1] < vec1[2]){
        long long int temp2 = vec1[1];
        vec1[1] = vec1[2];
        vec1[2] = temp2;
    }
    return vec1;
}

void solve(){
    vector<long long int> vec1;
    for(int i=0;i<3;i++){
        long long int x;
        cin >> x;
        vec1.push_back(x);
    }
    vector<long long int> vec2 = func1(vec1);
    long long int min = vec2[2];
    vec2.pop_back();
    int cuts;
    cuts = (vec2[0] - min)/min -1 + (vec2[1]-min)/min-1;
    if(cuts<=3){cout << "YES" << endl;}
    else {cout << "NO" << endl;}


}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

