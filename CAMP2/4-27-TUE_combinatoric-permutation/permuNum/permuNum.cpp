#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void partSort(int *arr, int l, int r){
    int temp[r - l + 1];
    int j = 0;
    for (int i = l; i <= r; i++) {
        temp[j] = arr[i];
        j++;
    }
    sort(temp, temp + r - l + 1);
    j = 0;
    for (int i = l; i <= r; i++) {
            arr[i] = temp[j];
            j++;
    }
}
void permuta(int *arr, int n, int l, int r){
    int i;
    if (l == r){
        for(int i = 0; i < n; i++)
            cout << arr[i] << ' ';
        cout << endl;
    }
    else    {
        for(i = l; i <= r; i++){
            swap(arr[l], arr[i]);
            int arr2[n];
            for(int i = 0; i < n; i++)
                arr2[i] = arr[i];
            partSort(arr2, l+1, r);
            permuta(arr2, n, l+1, r);
            swap(arr[l], arr[i]);
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    permuta(arr, n,0,n-1);
    return 0;
}

