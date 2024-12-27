#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double price, number;
    
    printf("Please enter unit price: ");
    scanf("%lf",&price);
    printf("Please enter number: ");
    scanf("%lf",&number);
    
    double vat = (price * number) * 7 / 100;
    
    double result = price * number + vat;
    
    printf("Total amount = %.2lf bath",result);
    
    return 0;
}
