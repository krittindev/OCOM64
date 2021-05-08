#include<bits/stdc++.h>
using namespace std;
int matrixChain_DP(int, int*);
int main(){
    int n;
    cin >> n;
    int p[n+1];
    for(int i = 0; i <= n; i++)
        cin >> p[i];
    cout << matrixChain_DP(n, p);
    return 0;
}
int matrixChain_DP(int n, int p[]){
    int m[n][n];
    for(int i = 0; i < n; i++)
        m[i][i] = 0;
    for(int len = 1; len < n; len++){
        for(int i = 0; i < n - len; i++){
            int j = i + len;
            m[i][j] = INT_MAX;
            for(int k = i; k < j; k++){
                int q = m[i][k] + m[k + 1][j] + p[i] * p[k+1] * p[j+1];
                if(q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << m[i][j] << '\t';
        cout << endl;
    }*/
    return m[0][n - 1];
}
