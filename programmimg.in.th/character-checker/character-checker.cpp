#include <stdio.h>
#include <string.h>

void Check(char *ch)
{
	int i=0;
	int n = strlen(ch);
	int count=0;
	do
	{
		if(ch[i] >= 'a' && ch[i] <= 'z')
		{
			++count;
		}

		++i;
	}while(ch[i] != '\0');
	
	if(count == n)
	{
		printf("All Small Letter");
	}
	else if(count == 0)
	{
		printf("All Capital Letter");
	}
	else if(count != n)
	{
		printf("Mix");
	}
}

int main()
{
	char ch[100];
	scanf("%s",&ch);
	Check(ch);
	return 0;
}
