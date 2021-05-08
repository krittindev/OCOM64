#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n < 2)
        return 1;
    return n * fac(n - 1);
}
int diff(int a, int b){
    return a > b? a - b: b - a;
}
int permut(int a, int b){
    return fac(a + b)/(fac(a) * fac(b));
}
int allpart(int a[], int b[]){
    return permut(diff(a[0], b[0]), diff(a[1], b[1]));
}
int main(){
    int w, h, start[2], mid[2], stop[2];
    cin >> w >> h >> start[0] >> start[1] >> stop[0] >> stop[1] >> mid[0] >> mid[1];
    cout << allpart(start, mid) * allpart(mid, stop);
    return 0;
}
