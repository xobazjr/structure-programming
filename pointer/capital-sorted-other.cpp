#include <stdio.h>
#include <string.h>

void Capital(char *name)
{
	int i;
	int count=0;
	int n = strlen(name);
	for(i=0;i<n;i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z')
		{
			name[i] -= 32;
		}
		else if(name[i] >= '0')
		{
			++count;
		}
	}
	printf("\nCapital       = %s\nCount number  = %d",name,count);
}

void Sorted(char *name)
{
	int n = strlen(name);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{	
			if(name[j] > name[j+1])
			{
				char temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;		
			}
		}
	}
	printf("\nSorted        = %s",name);
}

void Reserve(char *name)
{
	int i,j;
	int n = strlen(name);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		char temp = name[i];
		name[i] = name[j];
		name[j] = temp;
	}

	printf("\nReserve       = %s",name);
}

int main()
{
	char name[100];
	printf("--------------------------------\n");
	printf("Enter text\n--------------------------------\n: ");
	scanf("%s",&name);
	printf("--------------------------------\n");
	printf("\n--------------------------------");
	printf("\nNormal string = %s",name);
	Capital(name);
	Reserve(name);
	Sorted(name);
	return 0;
}


