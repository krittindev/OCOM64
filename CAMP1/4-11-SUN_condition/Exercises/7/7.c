#include<stdio.h>
int main(){
    int dy, dt, m, y;
    scanf("%d%d%d%d", &dy, &dt, &m, &y);
    switch(dy){
        case 1:
        printf("Sun ");
        break;
        case 2:
        printf("Mon ");
        break;
        case 3:
        printf("Tue ");
        break;
        case 4:
        printf("Wed ");
        break;
        case 5:
        printf("Thu ");
        break;
        case 6:
        printf("Fri");
        break;
        case 7:
        printf("Sat ");
        break;
    }
    printf("%d ", dt);
    switch(m){
        case 1:
        printf("January ");
        break;
        case 2:
        printf("February ");
        break;
        case 3:
        printf("March ");
        break;
        case 4:
        printf("April ");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June ");
        break;
        case 7:
        printf("July ");
        break;
        case 8:
        printf("August ");
        break;
        case 9:
        printf("September ");
        break;
        case 10:
        printf("October");
        break;
        case 11:
        printf("November ");
        break;
        case 12:
        printf("December ");
        break;
    }
    printf("%d ", y);
    return 0;
}
