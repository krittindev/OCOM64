#include<stdio.h>
void minMax(int n, int i, int max, int min);
int temp;
int main(){
	int n;
	scanf("%d", &n);
	minMax(n, n, -30000, 30000);
	return 0;
}
void minMax(int n, int i, int max, int min){
	scanf("%d", &temp);
	max = max<temp? temp: max;
	min = min>temp? temp: min;
	if(i == 1)
		printf("%d\n%d", min, max);
	else
		minMax(n, i-1, max, min);
} 
