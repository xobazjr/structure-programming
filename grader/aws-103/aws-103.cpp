#include <stdio.h>

int main ()
{
    int a,b;
    
    printf("In time?: ");
    scanf("%d:%d",&a,&b);
    
    if (a >= 7 && a <= 9)
    {
        if (a == 9)
        {
            if (b > 30)
            {
                printf("N");
            }
            else
            {
                printf("Y");
            }
        }
        else
        {
            printf("Y");
        }
    }
    else
    {
        printf("N");
    }
    
    return 0;
}
