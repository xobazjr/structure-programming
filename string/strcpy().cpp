#include <stdio.h>
#include <string.h>

int main()
{
	char ch[]={}; 
	char copy[]={};
	scanf("%s",&ch);
	strcpy(ch,copy);
	printf("%s -> %s",ch,copy);
	return 0;
}
