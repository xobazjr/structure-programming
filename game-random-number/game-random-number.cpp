#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int FindMin (){
  srand(time(NULL));
  int x = rand() % 100 + 1;
  int data[10] = {};
  data[0] = x;
  return x;
}

int main (){
  int y,i;
  int result = FindMin();
  for (i=1;i<=7;i++){
    printf("\nEnter your number 0 - 100: ");
    scanf("%d",&y);
    if (y < result){
      printf("Number is low\n");
    }
    else if (y > result){
      printf("Number is high\n");
    }
    else if (y == result){
      printf("\n");
      printf("You win\n");
      break;
    }
  }
  printf("\n");
  if (i == 8){
      printf("You lose\n");
      printf("Number is %d\n",result);
  }
  return 0;
}
