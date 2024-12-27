#include <stdio.h>
#include <string.h>

int main()
{
	char ch[]={"Suphanat_Junlek"};
	printf("Input:\n");
	char *p = strchr(ch,'_');
	
	printf("\nOutput:\n");
	printf("%d",p-ch);

	return 0;
}
