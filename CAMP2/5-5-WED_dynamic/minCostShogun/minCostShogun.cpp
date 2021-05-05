#include<bits/stdc++.h>
using namespace std;
int minCostShogun(int*, int, int);
int main(){
    int W, n;
    cin >> W >> n;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cout << minCostShogun(v, W, n);
    return 0;
}
int minCostShogun(int v[], int W, int n){
    int V[n + 1][W + 1];
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= W; j++)
            if(i == 0 || j == 0)
                V[i][j] = 0;
            else if(i == 1)
                V[i][j] = v[i - 1] + V[i][j - i];
            else if(i > W)
                V[i][j] = V[i - 1][j];
            else
                V[i][j] = min(v[i - 1] + V[i][j - i], V[i - 1][j]);
    /*
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++)
            cout << V[i][j] << '\t';
        cout << endl;
    }
    //*/
    return V[n][W];
}
