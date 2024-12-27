#include <stdio.h>

int main()
{
	int a;
	int *p;
	int **q;
	
	a= 58;
	p = &a;
	q = &p;
	
	printf("%3d",a);
	printf("%3d",*p);
	printf("%3d",**q);
	return 0;
}
