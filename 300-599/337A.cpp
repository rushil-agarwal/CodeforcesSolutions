#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

void sort(int n, int arr[]){
    int i, j; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]){ 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; }
        }
    }
    cout << arr[0];
}

void sorter(int array[], int n, int m) 
{ 
	int i, j; 
    int difference[m-n+1];
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++){ 
			if (array[j] > array[j + 1]){ 
				int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;} }
    }
    for(int i=0; i<n-m; i++){
        difference[i] = array[i+m-1] - array[i];
    }
    sort(n-m+1,difference);
} 

int main() 
{ 
    int m,n;
    cin >> m >> n;
	int array[n]; 
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
	sorter(array, n, m); 
	return 0; 
}
