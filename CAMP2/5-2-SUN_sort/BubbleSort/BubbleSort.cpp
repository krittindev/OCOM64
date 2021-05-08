#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int*, int);
int main(){
    int arr[100] , n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << bubbleSort(arr, n);
    return 0;
}
int bubbleSort(int arr[], int n){
    int c = 0;
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                c++;
            }
    return c;
}
