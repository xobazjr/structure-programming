#include <stdio.h>

int main(){
  int N,i,j,sum=0;
  printf("Enter N = ");
  scanf("%d",&N);
  int A[N],B[N],P[N][N];
  printf("Input array A\nEnter %d integers: ",N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  printf("Input array B\nEnter %d integers: ",N);
  for(i=0;i<N;i++){
    scanf("%d",&B[i]);
  }
  printf("Matrix P\n");
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      P[j][i] = A[i] * B[j];
      printf("%2d ",P[j][i]);
    }
    printf("\n");
  }
  return 0;
}
