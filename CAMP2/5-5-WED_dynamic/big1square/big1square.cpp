#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
        cin >> arr[i][j];
    int s[m][n], maxm = INT_MIN;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(i == 0 || j == 0)
                s[i][j] = arr[i][j];
            else if(arr[i][j]){
                s[i][j] = 1 + min(s[i - 1][j - 1],min(s[i - 1][j],s[i][j - 1]));
                maxm = max(s[i][j], maxm);
            }
            else
                s[i][j] = 0;
    /*
    cout << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << s[i][j] << ' ';
        cout << endl;
    }
    //*/
    cout << maxm;
    return 0;
}
