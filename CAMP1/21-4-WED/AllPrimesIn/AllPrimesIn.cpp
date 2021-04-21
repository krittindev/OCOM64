#include<bits/stdc++.h>
using namespace std;
bool isPrime(long n){
    if(n < 2)
        return false;
	for(long i = 2; i <= sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;
}
void allPrime(long a, long b){
	for(long i = a; i <= b; i++)
		if(isPrime(i))
			cout << i << ' ';
}
int main(){
	long a, b;
	cin >> a >> b;
	allPrime(a, b);
	return 0;
}
