#include <stdio.h>
#include <math.h>

int Function(int x)
{
  int f;
	if(x<0)
	{
		f = pow(x,2)+2*x+3; 
	}
	else if(x == 0)
	{
		f = 0;
	}
	else if(x>0)
	{
		f = x-2;
	} 
	
	printf("Result = %d\n",f);
}

int main()
{
  int x,f;
	printf("Enter your number x: ");
	scanf("%d",&x);
	Function(x);
	return 0;
}
