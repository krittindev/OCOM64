#include<bits/stdc++.h>
using namespace std;
int main(){
    int I, J;
    float x;
    cin >> x >> I >> J;
    float arr[I][I];
    for(int i = 0; i < I; i++)
        for(int j = 0; j <= i; j++)
            arr[i][j] = 0;
    arr[0][0] = x;
    for(int i = 0; i < I - 1; i++){
        for(int j = 0; j <= i; j++){
            if(arr[i][j] > 1){
                arr[i + 1][j] += (arr[i][j] - 1.0) / 2.0;
                arr[i + 1][j + 1] += (arr[i][j] - 1.0) / 2.0;
                arr[i][j] = 1;
            }
        }
    }
    /*
    for(int i = 0; i < I; i++){
        for(int j = 0; j <= i; j++){
            cout << arr[i][j] << ' ';
            //printf("%.2f ", arr[i][j]);
        }
        cout << endl;
    }
    //*/
    printf("%.2f", min(1.0,ceil(arr[I - 1][J - 1]*100.0)/100.0));
    return 0;
}
