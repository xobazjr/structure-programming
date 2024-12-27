#include <stdio.h>
#include <windows.h>

COORD coord={0,0}; //this is global variable
				   //center of axis is set to the top left cornor of the screen
void gotoxy(int x,int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
	FILE *fptr;
	char c;
	int x,y;
	fptr = fopen("File005.txt","r");
	if(fptr == NULL)
	{
		printf("Can't open the file.\n");
		return 1;
	}
	else
	{
		fscanf(fptr,"%d %d %c",&x,&y,&c);
		gotoxy(x,y);
		printf("%c",c);
		while((fscanf(fptr,"%d %d %c",&x,&y,&c)) != EOF)
		{
			gotoxy(x,y);
			printf("%c",c);
		}
	}
	
	return 0;
}
