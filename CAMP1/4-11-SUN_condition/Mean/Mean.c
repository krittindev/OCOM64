#include<stdio.h>
void mean(float n, float sum, float i);
float avg, temp;
int main(){
	float n;
	scanf("%f", &n);
	mean(n, 0, 1);
	return 0;
}
void mean(float n, float sum, float i){
	scanf("%f", &temp);
	sum += temp;
	if(i == n){
		avg = sum/n;
		printf("%.2f", avg);
	} 
	else
		mean(n, sum, i+1);
}
