#include<bits/stdc++.h>
using namespace std;
long gcd(long a, long b){
    if(a%b == 0)
        return b;
    return gcd(b, a%b);
}
void printPrimeFac(long n){
    if(n == 1)
        cout << "null";
    if(n%2 == 0){
        while(n%2 == 0){
            cout << 2 << ' ';
            n /= 2;
        }
    }
    for(int i = 3; i <= n; i+=2){
        while(n%i == 0){
            cout << i << ' ';
            n /= i;
        }
    }
    cout << endl;
}
int main(){
    long a, b;
    cin >> a >> b;
    printPrimeFac(a);
    printPrimeFac(b);
    printPrimeFac(gcd(a, b));
	return 0;
}
