#include<stdio.h>
int main(){
	int a, b, c, d, i, ta, tb, tc, td, max, maxi = 1;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = a+b+c+d;
	for(i=1;i<5;i++){
		scanf("%d%d%d%d", &ta, &tb, &tc, &td);
		if(max<ta+tb+tc+td){
			max = ta+tb+tc+td;
			maxi = i+1;
		}
	}
	printf("%d", maxi);
	return 0;
} 
