#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int*, int);
void printArr(int*, int);
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int  n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
