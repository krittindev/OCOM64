#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("%s", num%2==0? "Even number": "Odd number");
    return 0;
}
