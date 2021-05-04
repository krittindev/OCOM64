#include<bits/stdc++.h>
using namespace std;
int mem[10] ={0};
int dollars(int*, int*, int, int);
void coin(int*, int*, int, int);
int main(){
    int c[10001] = {0}, d[10], n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> d[i];
    //cout << dollars(c, d, n, k) << endl;
    coin(c, d, n, k);
    for(int i = 0; i < k; i++)
        cout << mem[i] << endl;
    return 0;
}
int dollars(int c[], int d[], int p, int k){
    if(p == 0)
        return 0;
    if(c[p] == 0){
        int min_c = INT_MAX;
        for(int i = 0; i < k; i++)
            if(p - d[i] + 1 > 0)
                if(dollars(c, d, p - d[i], k) + 1 < min_c)
                    min_c = dollars(c, d, p - d[i], k) + 1;
        c[p] = min_c;
    }
    return c[p];
}
void coin(int c[], int d[], int p, int k){
    if(p!=0){
        int min_c = INT_MAX, di;
        for(int i = 0; i < k; i++)
            if(p - d[i] + 1 > 0)
                if(dollars(c, d, p - d[i], k) + 1 < min_c){
                    min_c = dollars(c, d, p - d[i], k) + 1;
                    di = i;
                }
        mem[di]++;
        coin(c, d, p - d[di], k);
    }
}
