#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int n);
int main(){
    long long int a;
    cin >> a;
    cout << isPrime(a);
	return 0;
}
bool isPrime(long long int n){
    //printf("\nisPrime\tn : %lld\n", n);
    if(n == 2)
        return true;
    else if(n%2==0)
        return false;
    for(int i = 3; i <= sqrt(n); i+=2)
        if(n%i==0)
            return false;
    return true;
}

