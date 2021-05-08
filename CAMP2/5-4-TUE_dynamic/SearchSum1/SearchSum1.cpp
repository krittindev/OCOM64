#include<bits/stdc++.h>
using namespace std;
int check(int*, int, int);
int main(){
    int n, k, temp;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++)
        arr[i] += arr[i - 1];
    while(k--){
        cin >> temp;
        cout << check(arr, n, temp) << endl;
    }
    return 0;
}
int check(int arr[], int n, int t){
    int i;
    for(i = 0; i < n; i++)
        if(t < arr[i])
            break;
    return i;
}
