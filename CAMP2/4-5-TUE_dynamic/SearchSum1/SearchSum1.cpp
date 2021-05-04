#include<bits/stdc++.h>
using namespace std;
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
        int i;
        for(i = n - 1; i > 0; i--)
            if(temp >= arr[i])
                break;
        if(i == 0 && temp < arr[i])
            cout << 0 << endl;
        else
            cout << i + 1 << endl;
    }
    return 0;
}
