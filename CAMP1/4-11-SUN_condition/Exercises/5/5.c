#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", a>b? b>c? c: b: a>c? c: a);
    return 0;
}

