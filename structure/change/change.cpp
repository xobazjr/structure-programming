#include <stdio.h>

typedef struct
{
	int price;
}Chage;

void Change(Chage *chg,int price)
{
	chg[0].price = price / 1000;
	price %= 1000;
	chg[1].price = price / 500;
	price %= 500;
	chg[2].price = price / 100;
	price %= 100;
	chg[3].price = price / 50;
	price %= 50;
	chg[4].price = price / 20;
	price %= 20;
	chg[5].price = price / 10;
	price %= 10;
	chg[6].price = price;
}

int main()
{
	Chage chg[100];
	int price,i;
	scanf("%d",&price);
	Change(chg,price);
	for(i=0;i<7;i++)
	{
		printf("%d ",chg[i].price);
	}
	return 0;
}
