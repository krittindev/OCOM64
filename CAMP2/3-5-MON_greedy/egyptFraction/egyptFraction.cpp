#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y, nx, ny;
    cin >> x >> y;
    while(1){
        cout << ceil((float)(y)/(float)(x)) << endl;
        nx = ((-y) % x + x ) % x;
        ny = y * ceil((float)(y)/(float)(x));
        x = nx;
        y = ny;
        if(x == 0)
            break;
    }
    return 0;
}

