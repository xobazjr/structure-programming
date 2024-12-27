#include <stdio.h>

int main()
{
    int count = 0; 
    char ch;
    FILE *fptr, *fptt;
    fptr = fopen("5ways.txt", "r");
    fptt = fopen("Result2.txt", "w");
    if ((fptr == NULL) || (fptt == NULL))
    {
        printf("File can't open\n");
    }
    else
    {
        ch = fgetc(fptr);
        while (ch != EOF)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                ++count;
                fputc(ch, fptt);
            }
            ch = fgetc(fptr);
        }
    }
    printf("Chars in file = %d\n", count); 
    fclose(fptr);
    fclose(fptt);
    return 0;
}
