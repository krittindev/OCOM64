#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%d", a>10? 10*40 + (a-10)*50: a*40);
    return 0;
}
