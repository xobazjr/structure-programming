#include <stdio.h>

int main ()
{
    int x;
    
    printf("Please enter your number x + 9: ");
    scanf("%d",&x);
    
    x += 9;
    
    printf("%d",x);
    
    return 0;
}
