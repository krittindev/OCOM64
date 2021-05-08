#include<bits/stdc++.h>
using namespace std;
int mem[1000];
int LIS(int*, int*, int);
int main(){
    int n, arr[1000], L[1000] = {0}, maxL = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        if(LIS(arr, L, i) > maxL)
            maxL = LIS(arr, L, i);
    for(int i = 0; i < n; i++)
        cout << i << ' ' << arr[i] << ' ' << maxL + 1 << ' ' << L[i] << endl;
    cout << maxL << endl;
    maxL = 0;
    for(int i = 0; i < maxL; i++)
        cout << mem[i] << " ";
    return 0;
}
int LIS(int arr[], int L[], int n){
    int maxL = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < arr[n]){
            if(L[i] == 0)
                L[i] = LIS(arr, L, i);
            if(maxL < L[i])
                maxL = L[i];
        }
    L[n] = maxL + 1;
    return L[n];
}
