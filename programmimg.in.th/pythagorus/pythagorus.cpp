#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c=0,i=0;
	scanf("%f",&a);
	scanf("%f",&b);
	
	c += sqrt(pow(a,2) + pow(b,2));
	
	printf("%f",c);
	
	return 0;
}
