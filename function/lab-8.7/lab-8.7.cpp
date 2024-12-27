#include <stdio.h>

int minArray(int A[], int size)
{
    int a = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[i] < a)
        {
            a = A[i];
        }
    }
    return a;
}

int maxArray(int A[], int size)
{
    int a = A[0];
    for (int i = 0; i < size; i++)
    {
        if (A[i] > a)
        {
            a = A[i];
        }
    }
    return a;
}

int sumArray(int A[],int size)
{
    int a,i;
    for (i=0;i<=size-2;i++)
    {
        a += A[i];
    }
    return a;
}

int main()
{
    int A[10] = {5, 2, 8, 9, 10, 15};
    int min = minArray(A, 6);
    int max = maxArray(A, 6);
    int sum = sumArray(A, 6);
    printf("Min: %d\nMax: %d\nSum: %d\n",min,max,sum);
    return 0;
}
