#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n/10 << endl;
    n%=10;
    cout << n/5 << endl;
    n%=5;
    cout << n/2 << endl;
    n%=2;
    cout << n;
    return 0;
}
