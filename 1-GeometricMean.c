#include <stdio.h>
#include <math.h> 
/* 
Write a c program that calculates and prints the geometric mean of n values where n is given by the user. 
*/
int main(void){
  float geo = 1, x;
  int i, n;
  printf("Enter number of terms: ");
  scanf("%d", &n);
  for(i=1; i <=n; i=i+1){
    printf("Enter a value:");
    scanf("%f", &x);
    geo = geo * x;
  }
  printf("Geometric Mean = %.3f", pow(geo, 1.0/n));
  return 0;
}
