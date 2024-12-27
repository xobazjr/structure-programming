#include <stdio.h>

void Read(int *data01,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&data01[i]);
	}
}

int Printf(int *data01,int *data02,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum += data01[i] - data02[i];
	}
	return sum;
}

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int data01[n],data02[n];
	Read(data01,n);
	Read(data02,n);
	int result = Printf(data01,data02,n);
	printf("%d",result*-1);
	return 0;
}
