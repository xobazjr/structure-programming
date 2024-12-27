#include <stdio.h>
#include <math.h>

int main (){

  int a, b, c, d, one, two, three, four, five;
  printf("Enter the value of a: ");
  scanf("%d",&a);

  printf("Enter the value of b: ");
  scanf("%d",&b);
  
  printf("Enter the value of c: ");
  scanf("%d",&c);
  
  printf("Enter the value of d: ");
  scanf("%d",&d);
  
  one = 3 * a * b + 5 / 5 * b;
  two = 3 * a + 5 * b / 2 + c;
  three = ((pow(4, 3+c)) - 5 * d) * 2 / 7;
  four = sqrt(2 + 8 * b / a);
  five = cbrt(pow(b,3) - 4 * d);
  
  printf("\n1. %d\n2. %d\n3. %d\n4. %d\n5. %d\n",one,two,three,four,five);
  
  return 0;
}
