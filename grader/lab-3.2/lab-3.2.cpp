#include <stdio.h>
#include <math.h>

int main ()
{
    int size,i,x;
    
    printf("Please enter your count numbers: ");
    scanf("%d",&size);
    
    for (i=1;i<=size;i++)
    {
        printf("Please enter your number %d: ",i);
        scanf("%d",&x);
        
        if (x % 2 == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    
    return 0;
}
