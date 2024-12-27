#include <stdio.h>
#include <string.h>

int main()
{
	char ch01[100]; 
	char ch02[100];
	char cat[100];
	printf("Input:\n");
	scanf("%s",&ch01);
	scanf("%s",&ch02);
	
	strcat(cat,ch01);
	strcat(cat," ");
	strcat(cat,ch02);
	
	printf("\nOutput:\n");
	printf("%s",cat);
	return 0;
}
