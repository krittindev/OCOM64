#include<stdio.h>
int main(){
    int price;
    scanf("%d", &price);
    printf("%s",1000<=price&&price<=5000? "I think I can but this product":
                5000<price&&price<=8000? "I don't  want this produt":
                8000<price? "This product is too expensive":'\0');
    return 0;
}
