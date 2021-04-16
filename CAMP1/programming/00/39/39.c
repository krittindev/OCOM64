#include<stdio.h>
short int i, j;
int main(){
    short int n,narr;
    scanf("%d%d", &n, &narr);
    short int arr[n];
    for(i=0;i<narr;i++)
        scanf("%d", &arr[i]);

    return 0;
}
void recur(short int n, short int narr, short int arr[], short int level){
    if(level == n)
        for(i=0;i<n;i++)
            for(j=0;j<narr;j++)
                if(i+1 != arr[j]){
                    printf("%d ", i+1);
                    recur(n, narr, arr, level-1);
                }
    else if(level == 1){

    }else {

    }
}
