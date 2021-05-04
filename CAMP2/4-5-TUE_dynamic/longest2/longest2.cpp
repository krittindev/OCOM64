#include<bits/stdc++.h>
using namespace std;
int LCM(int*, int*, int);
int main(){
    int n, arr[1000], L[1000] = {0}, maxL = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        if(LCM(arr, L, i) > maxL)
            maxL = LCM(arr, L, i);
    cout << maxL << endl;
    maxL = 0;
    for(int i = 0; i < n; i++){
        if(L[i] > maxL){
            maxL = L[i];
            cout << arr[i] << " ";
        }
    }
    return 0;
}
int LCM(int arr[], int L[], int n){
    int maxL = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] < arr[n]){
            if(L[i] == 0)
                L[i] = LCM(arr, L, i);
            if(maxL < L[i])
                maxL = L[i];
        }
    L[n] = maxL + 1;
    return L[n];
}
