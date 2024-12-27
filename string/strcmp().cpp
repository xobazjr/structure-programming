#include <stdio.h>
#include <string.h>

typedef struct
{
	char ch[100];
}Data;

int main()
{
	int i=0;
	Data data[100];
	printf("Input:\n");
	scanf("%s",&data[i].ch);
	
	printf("\nOutput:\n");
	if(strcmp(data[i].ch,"exit") == 0)
	{
		printf("Hello world.\n");
	}
	else
	{
		printf("%s",data[i].ch);
	}
	return 0;
}
