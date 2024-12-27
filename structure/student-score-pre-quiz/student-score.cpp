#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[16];
	char surname[20];
	int score;
	float stolal;
}Student;

void readStudentData(Student *std,int n);
void printScore2(Student *std,int n);

int main()
{
	Student std[100];
	int n,j;
	scanf("%d",&n);
	readStudentData(std,n);
	printScore2(std,n);
	return 0;
}

void readStudentData(Student *std,int n)
{
	int i,j;
	int data[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",&std[i].name);
		scanf("%s",&std[i].surname);
		for(j=0;j<5;j++)
		{
			scanf("%d",&data[j]);
		}
		std[i].score = data[1];
	}
}

void printScore2(Student *std,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",std[i].name,std[i].score);
	}
}
