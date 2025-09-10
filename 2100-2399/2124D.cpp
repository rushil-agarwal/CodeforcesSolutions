#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(vector<int> &vec, int idx, int k, vector<bool> &canRemove){
    int curr = 1;
    int left = idx, right = idx;

    while(left >=0 && right <vec.size()){
        if(curr == k)
            return true;
        bool found = false;
        if(left > 0){
            if(canRemove[left-1] && vec[left-1] <= vec[idx]){
                curr++;
                left--;
                found = true;
            } else if(canRemove[left-1] && vec[left-1] <= vec[idx]){
                left--;
                continue;
            }
        }
        if(curr == k)
            return true;
        if(right < vec.size()-1){
            if(canRemove[right+1] && vec[right+1] <= vec[idx]){
                curr++;
                right++;
                found = true;
            } else if(canRemove[right+1] && vec[right+1] > vec[idx]){
                right++;
                continue;
            }
        }

        if(curr == k)
            return true;

        if(!found)
            return false;
    }

    return (curr == k);
}

void funct(vector<int> &vec, int i, int j, int k, bool &ans, vector<bool> &canRemove){
    if(i>j){
        ans = true;
        return;
    }
    if(ans)
        return;

    if(vec[i] != vec[j]){
        //remove first
        bool canRemove1 = false;
        if(check(vec, i, k, canRemove)){
            canRemove[i] = false;
            canRemove1 = true;
            funct(vec, i+1, j, k, ans, canRemove);
            canRemove[i] = true;

        }
        //remove second
        bool canRemove2 = false;
        if(check(vec, j, k, canRemove)){
            canRemove[j] = false;
            canRemove2 = true;
            funct(vec, i, j-1, k, ans, canRemove);
            canRemove[j] =true;
        }


        //if cant remove both, return false
        if(!canRemove1 && !canRemove2){
            return;
        }
    } else {
        funct(vec, i+1, j-1, k, ans, canRemove);
    }
}

void solve(){
    int n, k; cin >> n >> k;
    vector<int> vec(n);
    vector<bool> canRemove(n, true);
    for(int i=0; i<n; i++)
        cin >> vec[i];

    bool ans = false;

    funct(vec, 0, n-1, k, ans, canRemove);

    if(ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){

    ll t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}//
// Created by Lenovo on 06-07-2025.
//
