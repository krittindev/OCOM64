#include<stdio.h>
int main(){
    int b, shf;
    scanf("%d %d", &b, &shf);
    printf("%d", b|(1<<shf));
    return 0;
}


