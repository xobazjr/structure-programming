#include <stdio.h>
#define n 100

typedef struct
{
	int data[n];
}Stack;

int main()
{
	int i=0,size=0;
	char select;
	Stack stack;
	do
	{
		printf("Please select operation: ");
		scanf("%s",&select);
		printf("\n");
		if(select == 'P' || select == 'p')
		{
			printf("Please input data: ");
			scanf("%d",&stack.data[i]);
			printf("\n");
			size += 1;
			i+=1;
		}
		else if(select == 'X' || select == 'x')
		{
			if(i <= 0)
			{
				printf("Please input data\n\n");
			}
			else if(i >= 0)
			{
				printf("Data is : %d\n\n",stack.data[i-1]);
				i -= 1;	
			}
		}
	}while(1);
	return 0;
}
