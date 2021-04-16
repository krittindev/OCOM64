#include<stdio.h>
int increase(int a, int b);
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	increase(a, b);
	return 0;
}
int increase(int a, int b){
	if(a == b)
		printf("%d", a);
	else{
		printf("%d\n", a);
		increase(a+1, b);
	}
}	
