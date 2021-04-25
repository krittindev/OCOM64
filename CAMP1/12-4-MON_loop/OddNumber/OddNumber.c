#include<stdio.h>
int oddCounter(int i);
int temp;
int main(){
	printf("%d", oddCounter(10));
	return 0;
}
int oddCounter(int i){
	if(i>1){
		scanf("%d", &temp);
		//printf("c[%d] :%d\n", i, temp&1? 1: 0);
		return (temp&1? 1: 0) + oddCounter(i-1);
	}else{
		scanf("%d", &temp);
		//printf("c[%d] :%d\n", i, temp&1? 1: 0);
		return (temp&1? 1: 0);
	}
}
