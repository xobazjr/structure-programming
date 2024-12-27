#include <stdio.h>
#include <math.h>

double Function1()
{
	double x = fabs(7.5);
	return x;
}

double Function2()
{
	double x = floor(7.5);
	return x;
}

double Function3()
{
	double x = fabs(0.0);
	return x;
}

double Function4()
{
	double x = ceil(0.0);
	return x;
}

double Function5()
{
	double x = fabs(-6.4);
	return x;
}

double Function6()
{
	double x = ceil(-6.4);
	return x;
}

double Function7()
{
	double x = ceil(-fabs(-8 + floor(-5.5)));
	return x;
}

int main()
{
	double go1 = Function1();
	double go2 = Function2();
	double go3 = Function3();
	double go4 = Function4();
	double go5 = Function5();
	double go6 = Function6();
	double go7 = Function7();
		
	printf("a) x = fabs(7.5); = %lf\nb) x = floor(7.5); = %lf\nc) x = fabs(0.0); = %lf\nd) x = ceil(0.0); = %lf\ne) x = fabs(-6.4); = %lf\nf) x = ceil(-6.4); = %lf\ng) x = ceil(-fabs(-8 + floor(-5.5))); = %lf",go1,go2,go3,go4,go5,go6,go7);
	
	return 0;
}
