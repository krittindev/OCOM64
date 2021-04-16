#include<stdio.h>
int main(){
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("%c", sum<50? 'F': sum<60? 'D': sum<70? 'C': sum<80? 'B': 'A');
    if(sum>54&&(sum%10>4)&&sum<80)
        printf("+");
    return 0;
}

