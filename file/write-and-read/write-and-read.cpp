#include <stdio.h>

int main()
{
	FILE *fptr;
	char band[100], color[100], lop = 'y';
	int price;

	fptr = fopen("Man.txt", "w+"); 

	if (fptr == NULL)
	{
		printf("Can't open the file.\n");
		return 1;
	}
	else
	{
		while (lop == 'y' || lop == 'Y')
		{
			printf("Band: ");
			scanf("%s", band);
			printf("\nColor: ");
			scanf("%s", color);
			printf("\nPrice: ");
			scanf("%d", &price);
			fprintf(fptr,"%s %s %d\n",band,color,price);
			printf("\nexit = n continue = y: ");
			scanf(" %c", &lop);

			if (lop == 'n' || lop == 'N')
			{
				printf("\nEnd program\n");
				break;
			}
			printf("\n");
		}

		rewind(fptr);

		printf("\nData written to Man.txt:\n");
		while (fscanf(fptr, "%s %s %d", band, color, &price) != EOF)
		{
			printf("%s %s %d\n", band, color, price);
		}
	}

	fclose(fptr);

	return 0;
}
