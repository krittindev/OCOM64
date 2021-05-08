#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool zigzag = true;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr[0] << ' ';

    for (int level = 1; level < pow(2, ceil(log(n-1))); level++)
        if(level % 2 == 0){
            for(int r = min((int)(pow(2, level + 1) - 2), n); r > pow(2, level) - 2; r--)
                if(arr[r] != -1){
                    //cout << endl << "level : " << level << "     r : " << r << endl;
                    cout << arr[r] << ' ';
                    break;
                }
        }
        else{
            for(int l = pow(2, level) - 1; l < min((int)(pow(2, level + 1) - 1), n); l++)
                if(arr[l] != -1){
                    //cout << endl << "level : " << level << "     l : " << l << endl;
                    cout << arr[l] << ' ';
                    break;
                }
        }

    return 0;
}
