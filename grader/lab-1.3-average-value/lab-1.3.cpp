#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    int d=1;
    
    printf("a b c indicate the three numbers in the range of -100 to 100, separating by a white space.: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if (a > -100 && a > 100){
        printf("'a' out of range\n");
        d = 0;
    }
    
    if (b > -100 && b > 100){
        printf("'b' out of range\n");
        d = 0;
    }
    
    if (c > -100 && c > 100){
        printf("'c' out of range\n");
        d = 0;
    }
    
    if (d = 1){
        printf("%.3lf",b);
    }
    
    return 0;
}
