#include<stdio.h>
int gcd(int a, int b);
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", gcd(a, b));	
	return 0;
}
int gcd(int a, int b){
	if(a%b==0)
		return b;
	return gcd(b, a%b);
}
