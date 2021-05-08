#include<bits/stdc++.h>
using namespace std;
void seletionSort(int*, int, int);
void printArr(int*, int);
int main(){
    int arr[100] , n, x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    seletionSort(arr, n, x);
    printArr(arr, n);
    return 0;
}
void seletionSort(int arr[], int n, int x){
    int min_idx;
    for(int i = 0; i < n - 1; i++){
        min_idx = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[i], arr[min_idx]);
        if(!--x)
            return;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
