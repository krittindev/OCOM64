#include<stdio.h>
void min(int n, int minA, int minB, int minC);
int a, b, c;
int main(){
	int n;
	scanf("%d", &n);
	min(n, 30, 30, 40);
	return 0;
}

void min(int n, int minA, int minB, int minC){
	scanf("%d%d%d", &a, &b, &c);
	minA = minA>a? a: minA;  
	minB = minB>b? b: minB;  
	minC = minC>c? c: minC;  
	if(n == 1)
		printf("%d\n%d\n%d", minA, minB, minC);
	else
		min(n-1, minA, minB, minC);
}	
