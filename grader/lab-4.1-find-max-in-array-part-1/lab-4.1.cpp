#include <stdio.h>

int MaxFunc(int data[],int i,int n)
{
	int max = data[0];
	for(i=0;i<n;i++)
	{
		if(data[i] > max)
		{
			max = data[i];
		}
	}
	printf("%d",max);
}

int main()
{
	int n,i,x;
	scanf("%d",&n);
	int data[n];
	if(n>=1 && n<=20)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x >= -100 && x <= 100)
			{
				data[i] = x;
			}
			else
			{
				--i;
			}
		}
		MaxFunc(data,i,n);	
	}
	return 0;
}
