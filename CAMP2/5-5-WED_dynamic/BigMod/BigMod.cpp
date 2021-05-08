#include<bits/stdc++.h>
using namespace std;
int BigMod(int, int, int);
int main(){
    int t, b, p, m;
    cin >> t;
    while(t--){
        cin >> b >> p >> m;
        cout << BigMod(b % m, p, m) << endl;
    }
    return 0;
}
int BigMod(int b, int p, int m){
    if(p == 0)
        return 1;
    int a = BigMod(b, p / 2, m);
    int x = (a * a) % m;
    if(p % 2 == 1)
        x = (b * x) % m;
    return x;
}
