#include<stdio.h>
int main(){
    float baht, dollar;
    //printf("Baht : ");
    scanf("%f", &baht);
    //printf("Dollar : %.2f", 0.032*money);
    dollar = baht*0.032;
    printf("%.2f", dollar);
    return 0;
}
