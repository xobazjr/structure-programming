#include <stdio.h>
#include <string.h>

void Capital(char *ch1)
{
    int n = strlen(ch1);
    int i;
    for(i = 0; i < n; i++)
    {
        if(ch1[i] >= 'A' && ch1[i] <= 'Z')
        {
            ch1[i] += 32;
        }
    }
}

int main()
{
    char ch1[100];
    char lop = 'y';
    FILE *file;
    file = fopen("Text.txt","w");
    
    while(1)
    {
        if(lop == 'y' || lop == 'Y')
        {
            printf(": ");
            fflush(stdin);
            gets(ch1); 
            Capital(ch1);
            fprintf(file,"%s\n",ch1);
        }
        
        printf("\nExit = x Continue = y\n: ");
        scanf(" %c",&lop);
        
        if(lop == 'x' || lop == 'X')
        {
        	fprintf(file,"\n");
            break;
        }
        
        printf("\n");
    }
    
    fclose(file);
    
    return 0;
}
