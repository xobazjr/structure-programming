#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    double x;
    printf("Please enter angle in degree: ");
    scanf("%lf",&x);
    double sinx = sin(x);
    double cosx = cos(x);
    printf("sine of %.1lf degree is %.4lf\ncos of %.1lf degree is %.4lf\n",x,sinx,x,cosx);
    return 0;
}
