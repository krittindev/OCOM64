#include<bits/stdc++.h>
using namespace std;
int maximumSumRecur(int*, int, int);
int maximumSumBruc(int*, int);
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maximumSumBruc(arr, n);
    //cout << maximumSumRecur(arr, 0, n - 1);
    return 0;
}
int maximumSumBruc(int arr[], int n){ // Big O n^2
    int max_sum = INT_MIN, sum;
    for(int i = 0; i < n - 1; i++){
        sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum > max_sum)
                max_sum = sum;
        }
    }
    return max_sum;
}
int maximumSumRecur(int arr[], int low, int high){ // Big O n log n
    if(high == low)
        return arr[high];
    int mid = (high + low) / 2,
        left_max = INT_MIN,
        right_max = INT_MIN,
        sum = 0,
        max_right_left;
    for(int i = mid; i <= low; i++){
        sum += arr[i];
        if(sum > left_max)
            left_max = sum;
    }
    sum = 0;
    for(int i = mid + 1; i <= high; i++){
        sum += arr[i];
        if(sum > right_max)
            right_max = sum;
    }
    max_right_left = max(maximumSumRecur(arr, low, mid),(arr, mid + 1, high));
    return max(max_right_left, left_max + right_max);
}
