#include<stdio.h>
int main(){
    float w, h;
    float bmi;
    scanf("%f %f", &w, &h);
    bmi = w/h/h*100*100;
    printf("%.2f", bmi);
    return 0;
}
