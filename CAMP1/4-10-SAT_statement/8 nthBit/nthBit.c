#include<stdio.h>
int main(){
    int num, index[5], i;
    scanf("%d", &num);
    for(i=0;i<5;i++)
        scanf("%d", &index[i]);
    for(i=0;i<5;i++)
        printf("%d ", num>>index[i]&1);
    return 0;
}

