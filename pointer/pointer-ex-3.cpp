#include <stdio.h>
#include <string.h>

void swap(char *);
int main()
{
    char x[11] = {'1','2','3','4','5','a','b','c','d','e','\0'};
    printf("Before swapping: %s\n", x);
    swap(x);
    printf("After swapping: %s", x);
    return 0;
}

void swap(char *x)
{
    int i, j;
    int len = strlen(x);
    for(i = 0, j = len-1; i < j; i++, j--)
    {
        // Swap characters at positions i and j
        char temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}
