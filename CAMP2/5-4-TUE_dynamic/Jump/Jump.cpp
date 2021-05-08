#include<bits/stdc++.h>
using namespace std;
int jump(int*, int*, int, int);
int main(){
    int n, arr[1000], L[1000] = {0};
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        jump(arr, L, i, n);
    cout << L[n-1];
    return 0;
}
int jump(int arr[], int L[], int j, int n){
    for(int i = 1; i <= arr[j]; i++){
        if(j + i < n){
            if(L[j+i] == 0)
                L[j+i] = L[j] + 1;
            else
                L[j+i] = min(L[j+i], L[j] + 1);
        }
    }
    return L[j];
}
