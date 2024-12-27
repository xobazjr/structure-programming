#include <stdio.h>

int main()
{
    double frh;
    printf("F represents a Fahrenheit value in the range of -1,000.00 to 1,000.0: ");
    scanf("%lf",&frh);
    
    if(frh > -1000 && frh > 1000){
        printf("Out of range");
    }
    
    double Celsius = (frh - 32) * 5 / 9;
    
    printf("%.2lf",Celsius);
    
    return 0;
}
