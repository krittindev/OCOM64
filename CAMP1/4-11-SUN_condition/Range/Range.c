#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &c, &a, &b);
    printf("%s", a<c&&c<b? "Yes": "No");
    return 0;
}
