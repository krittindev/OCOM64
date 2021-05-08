#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &c, &a, &b);
    if(a<b){
        if(a<c){
            if(b<c)
                printf("%d\n%d\n%d", a, b, c);
            else
                printf("%d\n%d\n%d", a, c, b);
        }
        else
            printf("%d\n%d\n%d", c, a, b);
    }
    else{
        if(b<c){
            if(a<c)
                printf("%d\n%d\n%d", b, a, c);
            else
                printf("%d\n%d\n%d", b, c, a);
        }
        else
            printf("%d\n%d\n%d", c, b, a);
    }
    //prinf("%d %d %d", (a<b&&a<c)? a: ((b<a&&b<c)? b: c), ((b<a&&a<c)||(c<a&&a<b))? a: (((a<b&&b<c)||(c<b&&b<a))? b: c), (b<a&&c<a)? a: ((a<b&&c<b)? b: c));
    return 0;
}

