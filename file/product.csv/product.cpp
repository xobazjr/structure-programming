#include <stdio.h>

int main()
{
	FILE *file01;
	file01 = fopen("Test01.csv","w");
	int n;
	if(file01 == NULL)
	{
		printf("Fiile is empty.\n");
		return 1;
	}
	else
	{
		printf("How many your product: ");
		scanf("%d",&n);
		char product[100];
		int price,i,sum=0;
		for(i=1;i<=n;i++)
		{
			printf("\nEnter your product %d: ",i);
			scanf("%s",&product);
			printf("Enter your price %d: ",i);
			scanf("%d",&price);
			fprintf(file01,"%s %d\n",product,price);
		}
		rewind(file01);
		fclose(file01);
		file01 = fopen("Test01.csv","r");
		printf("\n");
		while((fscanf(file01,"%s %d",&product,&price)) != EOF)
		{
			printf("%s %d\n",product,price);
			sum += price;
		}
		file01 = fopen("Test01.csv","a");
		fprintf(file01,"All product price: %d\n",sum);
		printf("All product price: %d\n",sum);
	}
	fclose(file01);
	return 0;
}
