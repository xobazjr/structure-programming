#include <stdio.h>

typedef struct
{
	char name[100];
	char last_name[100];
	int age;
}Student;

void read(Student *std,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("\nEnter your name and last name\n: ");
		scanf("%s",&std[i].name);
		scanf("%s",&std[i].last_name);
		printf("\nHow old are you?\n: ");
		scanf("%d",&std[i].age);
	}
}

void printf(Student *std,int n)
{
	int i=0;
	printf("\n--------------------------------\n");
	printf("Age > 20");
	printf("\n--------------------------------");
	for(i=0;i<n;i++)
	{
		if(std[i].age > 20)
		{
			printf("\n%s %s %d",std[i].name,std[i].last_name,std[i].age);
		}
	}
}

int main()
{
	Student std[100];
	int n;
	printf("How many student?\n: ");
	scanf("%d",&n);
	read(std,n);
	printf(std,n);
	return 0;
}
