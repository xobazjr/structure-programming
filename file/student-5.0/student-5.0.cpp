#include <stdio.h>

typedef struct
{
	char name[100];
	int age;
	float score;
}Student;

void Read(Student *std,FILE *file01)
{
	int i=0;
	printf("--------------------------------\n");
	printf("File student.\n");
	printf("--------------------------------\n");
	while((fscanf(file01,"%s %d %f\n",&std[i].name,&std[i].age,&std[i].score)) != EOF)
	{
		printf("%s %d %.1f\n",std[i].name,std[i].age,std[i].score);
		++i;
	}
	printf("--------------------------------\n");
}

int Count(Student *std,FILE *file01)
{
	int count;
	int i=0;
	while((fscanf(file01,"%s %d %f\n",&std[i].name,&std[i].age,&std[i].score)) != EOF)
	{
		++count;
		++i;
	}
	return count;
}

void Importscore(Student *std,int n)
{
	int i,j;
	printf("\n--------------------------------\n");
	printf("Import score 5.0\n");
	printf("--------------------------------\n");
	for(i=0;i<n;i++)
	{
		std[i].score += 5.0;
		printf("%s %d %.1f\n",std[i].name,std[i].age,std[i].score);
	}
	printf("--------------------------------\n");
}

void Sorted(Student *std,FILE *file02,int n)
{
	int i,j;
	printf("\n--------------------------------\n");
	printf("File sorted.\n");
	printf("--------------------------------\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(std[j].score < std[j+1].score)
			{
				Student temp = std[i];
				std[i] = std[i+1];
				std[i+1] = temp;
				printf("%s %d %.1f\n",std[i].name,std[i].age,std[i].score);
			}
		}
	}
	printf("--------------------------------\n");

}

void Importtofile02(Student *std,FILE *file02,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fprintf(file02,"%s %d %.1f\n",std[i].name,std[i].age,std[i].score);
	}
	printf("\n--------------------------------\n");
	printf("Import file success.\n");
	printf("--------------------------------\n");
}

int main()
{
	int n;
	FILE *file01,*file02;
	Student std[100];
	file01 = fopen("student.txt","r");
	file02 = fopen("update_student.txt","w");
	if(file01 == NULL || file02 == NULL)
	{
		printf("File is empty.\n");
	}
	else
	{
		Read(std,file01);
		n = Count(std,file01);
		Importscore(std,n);
		Sorted(std,file02,n);
		Importtofile02(std,file02,n);
	}
	return 0;
}
