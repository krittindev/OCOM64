#include<stdio.h>
int main(){
    int n, num[100], i, j, isLeader;
    scanf("%d", &n);
    for(i = 0; i < n ;i++)
        scanf("%d", &num[i]);
    for(i = 0; i < n ;i++){
        isLeader = 1;
        for(j = i; j < n; j++)
            if(num[i] < num[j])
                isLeader = 0;
        if(isLeader)
            printf("%d ", num[i]);
    }
    return 0;
}
