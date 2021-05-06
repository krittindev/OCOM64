#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n, rl, ud;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    /*for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }*/
    cin >> rl >> ud;
    //cout <<rl<<ud<< endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << a[(i-ud+m)%m][(j-rl+n)%n] << ' ';
        cout << endl;
    }
    return 0;
}
