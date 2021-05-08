#include<bits/stdc++.h>
using namespace std;
long sumDigit(long n);
int main(){
	long m, a1, n, d, an, sum;
	cin >> m;
	while(m--){
		cin >> a1 >> n >> d;
		an = a1+(n-1)*d;
        //printf("\na1 : %ld \nn : %ld \nd : %ld \nan : %ld\n", a1, n, d, an);
		sum = 0;
		for(long i = a1; i <= an; i += d){
			sum += sumDigit(i);
            //printf("\nsum : %ld\n", sum);
		}
		cout << sum << endl;
	}
	return 0;
}
long sumDigit(long n){
    //printf("\nsumDigit : %ld\n", n);
	if(!n)
		return 0;
	return n % 10 + sumDigit(n / 10);
}
