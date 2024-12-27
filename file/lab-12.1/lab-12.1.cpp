#include <stdio.h>

void capitaltext(char *ch)
{
    if (*ch >= 'a' && *ch <= 'z') {
        *ch -= 32;
    }
}

int main()
{
    char ch;
    FILE *fptr, *fptt;
    fptr = fopen("5most.txt", "r");
    fptt = fopen("Result1.txt", "w");

    if ((fptr == NULL) || (fptt == NULL))
    {
        printf("File error\n");
    }
    else
    {
        ch = fgetc(fptr);
        while (ch != EOF)
        {
            capitaltext(&ch); 
            fputc(ch, fptt); 
            ch = fgetc(fptr);
        }
    }

    fclose(fptr);
    fclose(fptt);

    return 0;
}

