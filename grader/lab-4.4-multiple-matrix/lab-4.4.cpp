#include <stdio.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int A[n][n];
	int B[n][n];
	int C[n][n];
	
	if(n>=1 && n<=10)
	{
		for(i<0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&k);
				if(k>-100 && k<100)
				{
					A[i][j] = k;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&k);
				if(k>-100 && k<100)
				{
					B[i][j] = k;
				}
			}
		}
	}
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			C[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
            }
    	}
    }
    for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
	return 0;
}
