#include <stdio.h>
#include <math.h>

int main (){
    int num,nfact=1,i;
    printf("Pleas enter number of factotial: ");
    scanf("%d",&num);
    for (i=num;i>=1;i--){
        nfact *= i;
    }
    printf("Result is: %d",nfact);
    return 0;
}
