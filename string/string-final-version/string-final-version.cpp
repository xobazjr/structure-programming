#include <stdio.h>
#include <string.h>

void Sorted(char *ch1,char *ch2,char *ch3)
{
    int i,j;
    int n = strlen(ch1) + strlen(ch2);

    strcat(ch3,ch1);
    strcat(ch3,ch2);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(ch1[j] > ch2[j+1])
            {
                char temp = ch3[j];
                ch3[j] = ch3[j+1];
                ch3[j+1] = temp;
            }
        }
    }
}

int main()
{
    char ch1[100];
    char ch2[100];
    char ch3[100];

    scanf("%s",&ch1);
    scanf("%s",&ch2);

    //fgets(ch1,100,stdin);
    //fgets(ch2,100,stdin);

    Sorted(ch1,ch2,ch3);

    printf("%s",ch3);

    return 0;
}
