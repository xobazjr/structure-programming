#include <stdio.h>


int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	int data1[m][n];
	int data2[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&data1[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&data2[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			data1[i][j] += data2[i][j];
			printf("%d ",data1[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
