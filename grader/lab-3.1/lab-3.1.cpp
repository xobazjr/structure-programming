#include <stdio.h>

int main ()
{
    int r,i,j,k,count,g=1;
    
    printf("R represents a row of the triangle, where 1 <= R <= 100: ");
    scanf("%d",&r);
    
    k = r;
    
    for (i=1;i<=r;i++)
    {
        for (count=2;count<=g;count++)
        {
            printf(" ");
        }
        for (j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        k -= 1;
        g += 1;
    }
    
    return 0;
}
