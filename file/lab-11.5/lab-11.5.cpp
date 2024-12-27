#include <stdio.h>

typedef struct
{
	char id[100];
	char name1[100];
	char surname[100];
	char occupation[100];
	int age;
	char sex[100];
	char address[100];
}Person;

int main()
{
	Person person;
	FILE *fptr,*fptt;
	char id[100],name[100],lop='y';
	printf("Please enter name of file: ");
	scanf("%s",&name);
	fptr = fopen(name,"w");
	fptt = fopen(name,"r");
	
	if(fptr == NULL)
	{
		printf("File is empty!\n");
		return 1;
	}
	else
	{
		while(1)
		{
			if(lop=='y'||lop=='Y')
			{
				printf("Please enter ID: ");
				scanf("%s",person.id);
				printf("Please enter name: ");
				scanf("%s",person.name1);
				printf("Please enter surname: ");
				scanf("%s",person.surname);
				printf("Please enter occupation: ");
				scanf("%s",person.occupation);
				printf("Please enter age: ");
				scanf("%d",&person.age);
				printf("Please enter sex: ");
				scanf("%s",person.sex);
				printf("Please enter address: ");
				scanf("%s",person.address);
				printf("Do you want to continue ('y/n'): ");
				scanf(" %c", &lop);
				fprintf(fptr,"%s %s %s %s %d %s %s\n",person.id,person.name1,person.surname,person.occupation,person.age,person.sex,person.address);	
			}
			else if(lop=='n'||lop=='N')
			{
				rewind(fptr);
				printf("--------------------------------\n");
				printf("The list of person whose age over 20 are\n");
				while((fscanf(fptt,"%s %s %s %s %d %s %s\n",person.id,person.name1,person.surname,person.occupation,&person.age,person.sex,person.address))!=EOF)
				{
					if(person.age >= 20)
					{
						printf("%s %s %s %s %d %s\n",person.id,person.name1,person.surname,person.occupation,&person.age,person.sex,person.address);
					}
				}
				printf("--------------------------------");
				break;
			}
			else
			{
				printf("Do you want to continue ('y/n'): ");
				scanf(" %c", &lop);	
			}
		}		
	}
	fclose(fptt);
	fclose(fptr);
	return 0;
}
