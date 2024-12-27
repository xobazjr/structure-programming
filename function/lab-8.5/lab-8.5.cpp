#include <stdio.h>
#include <math.h>

double Funcone(int w, int h)
{
	double turn;
	turn = w * h;
	return turn;
}

double Funcone(int r)
{
	double turn;
	turn = M_PI * pow(r,2);
	return turn;
}

int main()
{
	int select;
	double w,h,r,result;
	
	printf("============MENU============\n1.Calculate area of rectangle\n2.Calculate area of circle\n");
	
	printf("\nPlease enter 1 or 2: ");
	scanf("%d",&select);
	
	switch(select)
	{
		case 1:printf("Please enter width: ");
		scanf("%lf",&w);
		printf("Please enter hight: ");
		scanf("%lf",&h);
		result = Funcone(w,h);
		break;
		
		case 2:printf("Please enter radius: ");
		scanf("%lf",&r);
		result = Funcone(r);
		break;
	}
	
	printf("\nArea = %.2lf",result);
	
	return 0;
}
