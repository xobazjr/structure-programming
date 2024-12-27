#include <stdio.h>
#include <math.h>

double FindLength(double X, double Y, double Z)
{
    double l;
    l = sqrt(pow(X, 2) + pow(Y, 2) + pow(Z, 2));
    return l;
}

int main()
{
    struct vector3D
    {
        double X, Y, Z;
    };
    
    int n, i;
    scanf("%d", &n);
    struct vector3D v3;
    
    double data[100];
    
    if (n >= 1 && n <= 100)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%lf %lf %lf", &v3.X, &v3.Y, &v3.Z);
            data[i] = FindLength(v3.X, v3.Y, v3.Z);
        }
        for (i = 0; i < n; i++)
        {
            printf("%.2lf\n", data[i]);
        }
    }
    else
    {
        printf("n (1<=n<=100)");
    }
    
    return 0;
}
