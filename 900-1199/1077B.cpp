#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

//    vector<int> disturbed;
//    for(int i=1;i<n-1;i++){
//        if(arr[i-1] == 1 && arr[i+1] == 1 && arr[i] == 0)
//            disturbed.push_back(i);
//    }
//    int result=0;
//    for(int i=0;i<disturbed.size();i++){
//        if(disturbed[i+1] - disturbed[i] == 2){
//            result++;
//            i++;
//        } else {
//            result++;
//        }
//    } better method:
    int result=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0 && arr[i-1] == 1 && arr[i+1] == 1){
            result++;
            arr[i+1]=0;
        }
    }
    cout << result << endl;
    return 0;
}