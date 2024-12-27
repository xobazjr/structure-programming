#include <stdio.h>
#include <math.h>

int main(){
    double r;
    double pi = 3.14159;
    
    printf("r represents a radius value in the range of 0 to 500: ");
    scanf("%lf",&r);
    
    if(r < 0 && r > 500){
        printf("Out of range");
    }
    
    double Area = pi * pow(r,2);
    
    printf("%.2lf",Area);
    
    return 0;
}
