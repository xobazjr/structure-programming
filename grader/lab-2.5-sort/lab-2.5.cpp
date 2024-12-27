#include <stdio.h>

int main ()
{
    int a,b,c,min,max,bet;
    
    printf("a b c represents three input integers, separating a white space.: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }
    
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else if (c <= a && c <= b)
    {
        min = c;
    }
    
    if (min == b || max == b && min == c || max == c)
    {
        bet = a;
    }
    else if (min == a || max == a && min == c || max == c)
    {
        bet = b;
    }
    else if (min == b || max == b && min == a || max == a)
    {
        bet = c;
    }
    
    printf("%d %d %d",min,bet,max);
    
    return 0;
}
