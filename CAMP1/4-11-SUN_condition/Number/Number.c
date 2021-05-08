#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%s", a==0? "Zero": a>0? "Positive number": "Negative number");
    return 0;
}
