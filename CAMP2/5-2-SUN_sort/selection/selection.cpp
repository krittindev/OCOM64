#include<bits/stdc++.h>
using namespace std;
void seletionSort(int*, int);
void printArr(int*, int);
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int  n = sizeof(arr)/sizeof(arr[0]);
    seletionSort(arr, n);
    printArr(arr, n);
    return 0;
}
void seletionSort(int arr[], int n){
    int min_idx;
    for(int i = 0; i < n - 1; i++){
        min_idx = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[i], arr[min_idx]);
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
