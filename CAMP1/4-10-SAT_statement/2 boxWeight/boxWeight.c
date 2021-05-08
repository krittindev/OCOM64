#include<stdio.h>
int main(){
    float   totalBoxWeight,
            totalProduct1Weight,
            totalProduct2Weight,
            BoxWeight,
            product1Weight,
            product2Weight;
    int amountProduct1, amountProduct2;
    scanf("%f %f %d %f %d", &totalBoxWeight, &totalProduct1Weight, &amountProduct1, &totalProduct2Weight, &amountProduct2);
    product1Weight = totalProduct1Weight / amountProduct1;
    product2Weight = totalProduct2Weight / amountProduct2;
    BoxWeight = totalBoxWeight - totalProduct1Weight - totalProduct2Weight;
    printf("%.2f %.2f %.2f", BoxWeight, product1Weight, product2Weight);
    return 0;
}
