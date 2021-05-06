#include <bits/stdc++.h>
using namespace std;

int waterlogging(int arr[], int n)
{
    int result = 0, l = 0, r = n - 1, max_l = 0, max_r = 0;
    while(l <= r){
        if(max_l <= max_r){
            result += max(0, max_l - arr[l]);
            max_l = max(max_l, arr[l]);
            l++;
        }
        else{
            result += max(0, max_r - arr[r]);
            max_r = max(max_r, arr[r]);
            r--;
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << waterlogging(arr, n);
    return 0;
}
