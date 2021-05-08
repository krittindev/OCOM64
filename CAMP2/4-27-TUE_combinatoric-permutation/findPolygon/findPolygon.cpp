#include<bits/stdc++.h>
using namespace std;
int fac(int n);
int combi(int n, int r);
int main()
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 - combi(n + 1, 2);
    return 0;
}
int fac(int n){
    if(n < 2)
        return 1;
    return n * fac(n - 1);
}
int combi(int n, int r){
    return fac(n) / (fac(n - r) * fac(r));
}
