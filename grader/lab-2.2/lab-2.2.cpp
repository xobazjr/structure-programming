#include <stdio.h>

int main ()
{
    char oprt;
    double a,b,result;
    
    printf("a o b indicates 1st integer, operator and 2nd integer respectively, separating a white space.: ");
    scanf("%lf %s %lf",&a,&oprt,&b);
    
    if (oprt == '+'){
        result = a + b;
    }
    else if (oprt == '-'){
        result = a - b;
    }
    else if (oprt == '*'){
        result = a * b;
    }
    else if (oprt == '/'){
        result = a / b;
    }
    
    printf("%.2lf\n",result);
    
    return 0;
}
