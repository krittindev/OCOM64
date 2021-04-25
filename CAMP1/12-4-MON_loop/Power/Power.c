#include<stdio.h>
int pow(int b, int d);
int main(){
	int b, d;
	scanf("%d%d", &b, &d);
	printf("%d", pow(b, d)); 
	return 0;
}
int pow(int b,int d){
	if(!d)
		return 1;
	else 
		return b * pow(b, d-1);
}
