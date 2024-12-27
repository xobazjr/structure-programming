#include <stdio.h>
#include <math.h>

int main (){
    double BMI,h,w;
    
    printf("indicates weight (kilograms) and height (meters), separating a white space where 1.0 < w < 200.0 and 1.0 <= h <= 2.0: ");
    scanf("%lf %lf",&w,&h);
    
    BMI = w / pow(h,2);
    
    if (BMI < 18.5){
        printf("underweight");
    }
    else if (BMI <= 24.0){
        printf("normal weight");
    }
    else if (BMI <= 29.9){
        printf("overweight");
    }
    else if (BMI > 30.0){
        printf("Obese");
    }
    
    return 0;
}
