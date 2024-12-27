#include <stdio.h>

int main (){
    int num1,num2,result;
    char oprt;
    
    printf("Please enter number1: ");
    scanf("%d",&num1);
    printf("Please enter number2: ");
    scanf("%d",&num2);
    printf("Please enter operator: ");
    scanf("%s",&oprt);
    
    if (oprt == '+'){
        result = num1 + num2;
    }
    if (oprt == '-'){
        result = num1 - num2;
    }
    if (oprt == '*'){
        result = num1 * num2;
    }
    if (oprt == '/'){
        result = num1 / num2;
    }
    
    printf("Result is = %d",result);
    
    return 0;
}
