#include<bits/stdc++.h>
using namespace std;
int diff(int, int);
int main(){
    int h, m;
    cin >> h >> m;
    h = h == 12? 0: h;
    h = h * 30 + m * 30 / 60;
    m = m * 6;
    int angle = diff(h, m);
    cout << min(angle, 360 - angle);
    return 0;
}
int diff(int a, int b){
    return a > b ? a - b: b - a;
}
