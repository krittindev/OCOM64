#include<bits/stdc++.h>
using namespace std;
int searchSum(int*, int, int);
int main(){
    int n, k, temp;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    while(k--){
        cin >> temp;
        cout << searchSum(arr, n, temp) << endl;
    }
    return 0;
}
int searchSum(int arr[], int n, int t){
    int p = arr[0], s = 0, counter = 0;
    if(arr[0] > t)
        counter = 0;
    else
        counter = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > t)
            continue;
        if(p > t ||  p + arr[i] > t ){
            counter = 1;
            p = arr[i];
        }
        else{
            counter++;
            p += arr[i];
        }
        s = max(s, counter);
    }
    return s;
}
