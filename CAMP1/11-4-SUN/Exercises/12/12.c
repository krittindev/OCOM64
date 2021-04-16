#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("%s", 0<=num&&num<=100? "Yes": "No");
    return 0;
}
