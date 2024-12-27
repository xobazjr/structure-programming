#include <stdio.h>
#include <math.h>

long int FindNFact (){
  long int n,nfact=1,i;
  printf("Enter the value of n: ");
  scanf("%ld",&n);
  for (i=1;i<=n;i++){
      nfact *= i;
  }
  return nfact;
}

int main (){
  long int result = FindNFact();
  printf("The factorial is %ld",result);
  return 0;
}
