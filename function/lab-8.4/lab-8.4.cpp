#include <stdio.h>
#include <math.h>

double Function()
{	
	double x1,y1,z1,x2,y2,z2;
	
	printf("Enter number x1: ");
	scanf("%lf",&x1);
	printf("Enter number y1: ");
	scanf("%lf",&y1);
	printf("Enter number z1: ");
	scanf("%lf",&z1);
	printf("Enter number x2: ");
	scanf("%lf",&x2);
	printf("Enter number y2: ");
	scanf("%lf",&y2);
	printf("Enter number z1: ");
	scanf("%lf",&z1);

	int d = sqrt(pow(abs(z2-z1),2) + pow(abs(y2-y1),2) + pow(abs(x2-x1),2));
	return d;
}

int main()
{
	double result = Function();
	printf("\nResult = %lf\n",result);
	return 0;	
}
