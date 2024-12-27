#include <stdio.h>

int main (){
  char name[100];
  char gen;
  int c,k,ck,w,id;
  printf("Please enter your name: ");
  scanf("%s",&name);
  printf("\nAre you male or female, %s (M, F): ",name);
  scanf("%s",&gen);
  printf("\n%s, what is your height in c.m. and weight in k.g: ",name);
  scanf("%d %d",&c,&k);
  
  if (gen == 'F'){
      ck = c - k;
      if (ck > 110){
          w = ck - 110;
          id = w + k;
          printf("%s, your ideal weight is %d kg, you are %d kg underweight",name,id,w);
      }
      else if (ck < 110){
          w = 110 - ck;
          id = w + k;
          printf("%s, your ideal weight is %d kg, you are %d kg overweight",name,id,w);
      }
  }
  
  if (gen == 'M'){
      ck = c - k;
      if (ck > 105){
          w = ck - 105;
          id = w + k;
          printf("%s, your ideal weight is %d kg, you are %d kg underweight",name,id,w);
      }
      else if (ck < 105){
          w = 105 - ck;
          id = w + k;
          printf("%s, your ideal weight is %d kg, you are %d kg overweight",name,id,w);
      }
  }
  
  return 0;
}
