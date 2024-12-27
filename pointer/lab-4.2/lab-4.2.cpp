#include <stdio.h>
#include <string.h>

int reverse(char *str)
{
	int i,j;
	int len = strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

int findint(char *str)
{
	int j=0,i,len = strlen(str);
	for(i=0;i<len-1;i++)
	{
		switch(str[i])
		{
			case '0': j++; break;
			case '1': j++; break;
			case '2': j++; break;
			case '3': j++; break;
			case '4': j++; break;
			case '5': j++; break;
			case '6': j++; break;
			case '7': j++; break;
			case '8': j++; break;
			case '9': j++; break;
		}
	}
	return j;
}

int main()
{
	char str[]={};
	scanf("%99[^\n]",str);
	reverse(str);
	printf("%s\n",str);
	int num = findint(str);
	printf("%d",num);
	return 0;
}
