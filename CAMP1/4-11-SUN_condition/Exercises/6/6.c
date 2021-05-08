#include<stdio.h>
int main(){
    char a, b, c;
    scanf("%c %c %c", &c, &a, &b);
    if(a<b){
        if(a<c){
            if(b<c)
                printf("%c %c %c", a, b, c);
            else
                printf("%c %c %c", a, c, b);
        }
        else
            printf("%c %c %c", c, a, b);
    }
    else{
        if(b<c){
            if(a<c)
                printf("%c %c %c", b, a, c);
            else
                printf("%c %c %c", b, c, a);
        }
        else
            printf("%c %c %c", c, b, a);
    }
    //prinf("%d %d %d", (a<b&&a<c)? a: ((b<a&&b<c)? b: c), ((b<a&&a<c)||(c<a&&a<b))? a: (((a<b&&b<c)||(c<b&&b<a))? b: c), (b<a&&c<a)? a: ((a<b&&c<b)? b: c));
    return 0;
}

