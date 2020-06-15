#include <stdio.h>
double facto(int x);

int main(void){
  int number = 0;
  printf("Enter a number to get the factorial value:");
  scanf("%d", &number);
  printf("Factorial of %d is equal to = %f", number, facto(number));
}


double facto(int x){
  double product = 1;
  for(int i = 1; i<=x;i++){
    product *= i;
  }
  return product;
}

