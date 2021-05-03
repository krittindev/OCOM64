#include<bits/stdc++.h>
using namespace std;
int main(){
    float x, y;
    cin >> x >> y;
    while(1){
        cout << x << ' ' << y << endl;
        if((((int)(-y)%(int)x)+(int)x)%(int)x!=1){
            cout << ceil(y/x);
            break;
        }
        cout << ceil(y/x) << endl;
        x = (((int)(-y)%(int)x)+(int)x)%(int)x;
        y = y * ceil(y/x);
    }
    return 0;
}

