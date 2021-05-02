#include<bits/stdc++.h>
using namespace std;
void insertSort(int*, int);
void printArr(int*, int);
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int  n = sizeof(arr)/sizeof(arr[0]);
    insertSort(arr, n);
    printArr(arr, n);
    return 0;
}
void insertSort(int arr[], int n){
    int key, j;
    for(int i = 1; i < n; i++){
        key = arr[i];
        for(j = i - 1; j >= 0 && arr[j] > key; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
