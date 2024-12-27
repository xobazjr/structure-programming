#include <stdio.h>
#include <string.h>

void *cpt(char *x)
{
	int i=0;
	while(x[i] != '\0')
	{
		if(x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] -= 32;
		}
		i++;
	}
	return x;
}

int main()
{
	char x[]={};
	scanf("%s",&x);
	printf("%s",cpt(x));
	return 0;
}
