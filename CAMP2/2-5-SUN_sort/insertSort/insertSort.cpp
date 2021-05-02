#include<bits/stdc++.h>
using namespace std;
void insertSort(int*, int);
void printArr(int*, int);
void findArr(int*, int*, int);
int main(){
    int arr1[100] , arr2[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    insertSort(arr1, n);
    findArr(arr1, arr2, n);
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
void findArr(int arr1[], int arr2[], int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(arr2[i] == arr1[j]){
                cout << j + 1 << ' ';
                break;
            }
}
void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}
