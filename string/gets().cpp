#include <stdio.h>

void Authentication(char *code)
{
	int i=0;
	do
	{
		if(code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u')
		{
			printf("%c",code[i]);
			i+=3;
		}
		else
		{
			printf("%c",code[i]);
			++i;
		}
	}while(code[i] != '\0');
}

int main()
{
	char code[100];
	gets(code);
	Authentication(code);
	return 0;
}
