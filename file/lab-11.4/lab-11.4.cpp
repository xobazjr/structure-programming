#include <stdio.h>

typedef struct
{
	char name1[100];
	char name2[100];
}Read;

int main()
{
	Read read;
	FILE *fptr,*fptt;
	char ch;
	printf("Please enter file name to read: ");
	scanf("%s",read.name1);
	printf("Please enter file name to save: ");
	scanf("%s",read.name2);
	
	fptr = fopen(read.name1,"r");
	fptt = fopen(read.name2,"w");
	
	if(fptr == NULL || fptt == NULL)
	{
		printf("--------------------------------");
		printf("\nError File is Null.\n");
		printf("--------------------------------\n");
		return 1;
	}
	else
	{
		printf("--------------------------------");
		printf("\nFILE IS ALREADY SAVED.\n");
		printf("--------------------------------");
		printf("\nNumber of Vowels in %s are\n",read.name1);
		while((ch = fgetc(fptr)) != EOF)
		{
			fputc(ch,fptt);
			printf("%c",ch);
		}
	}
	
	fclose(fptr);
	fclose(fptt);
	
	return 0;
}
