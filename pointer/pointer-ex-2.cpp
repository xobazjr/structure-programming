#include <stdio.h>

int main(void)
{
	int a;
	a = 7;
	int *aPtr;
	aPtr = &a;
	printf("The address of a is %p\nThe Value of aPtr is %p",&a,aPtr);
	printf("\n\nThe value of a is %d\nThe value of *aPtr is %d",a,*aPtr);
	printf("\n\nShowing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n",&*aPtr,*&aPtr);
	return 0;
}
