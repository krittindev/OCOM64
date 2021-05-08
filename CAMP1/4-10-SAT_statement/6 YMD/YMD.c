#include<stdio.h>
int main(){
    int y, m, d;
    scanf("%d", &d);
    y = (d - (d % 365))/365;
    d %= 365;
    m = (d - (d % 30))/30;
    d %= 30;
    printf("%d %d %d", y, m, d);
    return 0;
}
