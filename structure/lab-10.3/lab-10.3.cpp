#include <stdio.h>

typedef struct
{
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
}Change;

void defChange(int price, Change *change)
{
	change->b = price / 1000;
	price %= 1000;
	change->c = price / 500;
	price %= 500;
	change->d = price / 100;
	price %= 100;
	change->e = price / 50;
	price %= 50;
	change->f = price / 20;
	price %= 20;
	change->g = price / 10;
	price %= 10;
	change->h = price;
}

int main()
{
	int price;
	scanf("%d", &price);
	Change change;
	defChange(price, &change);
	printf("%d %d %d %d %d %d %d", change.b, change.c, change.d, change.e, change.f, change.g, change.h);
	return 0;
}
