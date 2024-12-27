#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[100],code[100],title[100],artist[100],date[100],company[100];
    char lop='y';
    float price;
    printf("Welcome to CS-KMUTNB MUSIC Shop\n");
    printf("Please enter name of file: ");
    scanf("%s",&name);

    file = fopen(name,"w");
    
    if(file == NULL)
    {
    	printf("FILE IS EMPTY.\n");
    	return 1;
	}
	else
	{
		 while(1)
    	{
    		if(lop == 'y' || lop == 'Y')
    		{
    			printf("Please enter the product code: ");
        		scanf("%s",&code);
        		printf("Please enter the product title: ");
        		fflush(stdin);
        		gets(title);
        		printf("Please enter the name of artist: ");
        		fflush(stdin);
        		gets(artist);
        		printf("Please enter the issue date: ");
        		scanf("%s",&date);
        		printf("Please enter the company: ");
        		fflush(stdin);
        		gets(company);
        		printf("Please enter the price: ");
        		scanf("%f",&price);
        		fprintf(file,"%s %s %s %s %s %.2f\n",code,title,artist,date,company,price);
			}
		
			printf("Do you want to continue ('y/n'): ");
        	scanf(" %c",&lop);
        	printf("\n");
        
        	if(lop == 'n' || lop == 'N')
        	{
        		printf("THANK YOU.\nTHE CS-KMUTNB MUSIC Shop IS CLOSING.\nNOW, WE ARE WRITING THE REMAINING GOODS FOR TOMORROW!\n");
        		break;
			}
    	}
	}

    fclose(file);

    return 0;
}
