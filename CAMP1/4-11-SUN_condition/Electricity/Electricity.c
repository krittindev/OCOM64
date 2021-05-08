#include<stdio.h>
int main(){
    int u;
    float c = 0;
    scanf("%d", &u);
    if(u<=15){
        c += u*1.86;
    }else if(u<=25){
        c += 15*1.86;
        c += (u-15)*2.52;
    }else if(u<=35){
        c += 15*1.86;
        c += 10*2.52;
        c += (u-25)*2.75;
    }else if(u<=100){
        c += 15*1.86;
        c += 10*2.52;
        c += 10*2.75;
        c += (u-35)*3.14;
    }else{
        c += 15*1.86;
        c += 10*2.52;
        c += 10*2.75;
        c += 65*3.14;
        c += (u-100)*3.93;
    }
    printf("%.2f", c);
    return 0;
}
