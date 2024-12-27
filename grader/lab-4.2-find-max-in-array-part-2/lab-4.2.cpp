#include <stdio.h>

int ModeFunc(int A[],int n,int i)
{
	int max_count = 0, max_element,j;
	for (i=0;i<n;i++) {
        int count = 1;
        for (j=i+1;j<n;j++) {
            if (A[i] == A[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_element = A[i];
        }
    }
    printf("%d", max_element);
}

int main()
{
	int n,x,i;
	scanf("%d",&n);
	int A[n];
	if(n>=1 && n<=50)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x>-100 && x<100)
			{
				A[i] = x;
			}
			else
			{
				--i;
			}
		}
	}
	ModeFunc(A,n,i);
	return 0;
}
