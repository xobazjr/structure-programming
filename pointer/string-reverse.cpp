#include <stdio.h>
#include <string.h>

void swap(char *);
int main()
{
    char x[11];
    scanf("%s",&x);
    printf("\nBefore swapping: %s\n", x);
    swap(x);
    printf("After swapping: %s\n", x);
    return 0;
}

void swap(char *x)
{
    int i, j;
    int len = strlen(x);
    for(i = 0, j = len-1; i < j; i++, j--)
    {
        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}
