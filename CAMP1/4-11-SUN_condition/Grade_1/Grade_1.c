#include<stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    switch(c){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Fair");
        break;
        case 'D':
        printf("Poor");
        break;
        case 'E':
        printf("Failure");
        break;
        default:
        printf("Invalid data");
    }
    return 0;
}
