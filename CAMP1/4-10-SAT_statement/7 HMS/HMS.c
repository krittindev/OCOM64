#include<stdio.h>
int main(){
    int h, m, s;
    scanf("%d", &s);
    h = (s - (s % 3600))/3600;
    s %= 3600;
    m = (s - (s % 60))/60;
    s %= 60;
    printf("%d:%d:%d", h, m, s);
    return 0;
}

