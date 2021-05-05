#include<bits/stdc++.h>
using namespace std;
void knapsack(int, int, int*, int*);
int main(){
    int n, W;
    cin >> n >> W;
    int w[n], v[n];
    for(int i = 0; i < n; i++)
        cin >> w[i];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    knapsack(n, W, w, v);
    return 0;
}
void knapsack(int n, int W, int w[], int v[]){
    int V[n+1][W+1], item[n+1][W+1], wv;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i == 0 || j == 0){
                V[i][j] = 0;
                item[i][j] = 0;
            }
            else if(w[i-1] <= j && v[i-1] + V[i - 1][j - w[i-1]] > V[i - 1][j]){
                V[i][j] = v[i-1] + V[i - 1][j - w[i-1]];
                item[i][j] = 1 + item[i - 1][j - w[i-1]];
            }
            else{
                V[i][j] = V[i - 1][j];
                item[i][j] = item[i - 1][j];
            }
            //cout << V[i][j] << '\t';
        }
        //cout << endl;
    }
    cout << V[n][W] << ' ' << item[n][W] << ' ';
    /*
    cout << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            cout << item[i][j] << '\t';
        }
        cout << endl;
    }
    */
    int j = W;
    while(V[n][j]==V[n][W]){
        j--;
    }
    wv = ++j;
    cout << wv;
}
