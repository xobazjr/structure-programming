#include <stdio.h>

typedef struct {
    char name[100];
    char last_name[100];
    int score;
}Student;

int main()
{
    FILE *fptr = fopen("Student.csv","w");
    int n,i,j;
    int data[5][5];
    scanf("%d",&n);
    Student std[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&std[i].name);
        scanf("%s",&std[i].last_name);
        for(j=0;j<5;j++)
        {
            scanf("%d",&data[j][i]);
        }
    }

    scanf("%d",&i);
    scanf("%d",&j);

    int k,l,max=0;
    for(k=0;k<n;k++)
    {
        if(data[i-1][k] >= data[j-1][k])
        {
            max = data[i-1][k];
            std[k].score = max;
        }
        else
        {
            max = data[j-1][k];
            std[k].score = max;  
        }
    }

    fprintf(fptr,"Name Score\n");
    for(i=0;i<n;i++)
    {
        fprintf(fptr,"%s %d\n",std[i].name,std[i].score);
        printf("%s %d\n",std[i].name,std[i].score);
    }

    fclose(fptr);

    return 0;
}
