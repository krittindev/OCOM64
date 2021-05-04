#include<bits/stdc++.h>
using namespace std;
int arrL[5000] = {0};
int L(int*, int);
int main(){
    int n, arr[5000], maxL = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i <= n; i++)
        if(maxL < L(arr, i))
            maxL = L(arr, i);
    cout << maxL;
    return 0;
}
int L(int input[], int j){
    if(j == 0)
        return 0;
    if(arrL[j] == 0){
        arrL[j] = max(input[j-1], input[j-1] + L(input, j-1));
    }
    return arrL[j];
}

