#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x1 = 1, x2 = 2, temp;
    cin >> n;
    while(--n){
        temp = x1 + x2;
        x1 = x2;
        x2 = temp;
    }
    cout << x2;
    return 0;
}
