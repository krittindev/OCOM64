#include<stdio.h>
int main(){
    int wh, h;
    scanf("%d%d", &wh, &h);
    printf("%d", wh==2? h<=3? h*5: (h-3)*10: h<=3? h*10: (h-3)*20);
    return 0;
}

