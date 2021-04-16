#include<stdio.h>
void increase(int n, int i);
int main(){
	int n;
	scanf("%d", &n);
	increase(n, 1);
	return 0;
}
void increase(int n, int i){
	if(i == n){
		printf("%d\n", i);
	}else{
		printf("%d\n", i);
		increase(n, i+1);
	}
}
