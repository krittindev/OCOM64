#include<bits/stdc++.h>
using namespace std;
int isPrime(int n);
int isPalindrome(int n);
int main(){
    int n, m;
    cin>>n;
    m=n;
    while(m<=2000000){
        if(isPrime(m) && isPalindrome(m)){
            printf("%d", m);
            return 0;
        }
        m++;
    }
	return 0;
}
int isPrime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
		if((n%i)==0)
			return 0;
	return 1;
}
int isPalindrome(int n){
	int nonrev = n, rev = 0;
	do{
		rev = rev*10 + nonrev%10;
		nonrev /= 10;
	}while(nonrev);
	if(n == rev)
		return 1;
	return 0;
}
