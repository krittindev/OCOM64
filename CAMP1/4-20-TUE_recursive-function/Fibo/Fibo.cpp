#include<bits/stdc++.h>
using namespace std;
long int fibom[1000] = {0};
long int fibo(int n){
	if(fibom[n-1])
		return fibom[n-1];
	fibom[n-1] = fibo(n-1) + fibo(n-2);
	return fibom[n-1];
}
int main(){
	fibom[0] = 1;
	fibom[1] = 1;
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}
