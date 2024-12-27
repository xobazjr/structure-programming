#include <stdio.h>

int MaxFunc(int size,int data[])
{
	int i;
	int max = data[0];
	
	for(i=0;i<size;i++)
	{
		if(data[i]>max)
		{
			max = data[i];
		}
	}
	
	return max;
}

int MinFunc(int size,int data[])
{
	int i;
	int min = data[0];
	for(i=0;i<size;i++)
	{
		if(data[i]<min)
		{
			min = data[i];
		}
	}
	
	return min;
}

int main()
{
	int i,size,j,sorted;

	printf("How many your data?\nans: ");
	scanf("%d",&size);
	int data[size];
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf("Number %d\nans: ",i+1);
		scanf("%d",&data[i]);
		printf("\n");
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(data[j]>data[j+1])
			{
				sorted = data[j];
				data[j] = data[j+1];
				data[j+1] = sorted;
			}
		}
	}

	int max = MaxFunc(size,data);
	int min = MinFunc(size,data);

	printf("--------------------------------\n");
	printf("Min = %d\nMax = %d\n",min,max);
	printf("Sorted = { ");
	for(i=0;i<size;i++)
	{
		printf("%d ",data[i]);
	}
	printf("}\n");
	printf("--------------------------------\n");
	
	return 0;
}
