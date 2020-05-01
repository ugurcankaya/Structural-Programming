#include <stdio.h>

//Fibonacci Numbers using an Array
int main(void){
    long double fib[500];
    int i, n;
    printf("Enter the Element Number: ");
    scanf("%d", &n);
    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i<=n; i=i+1) {
        //we'll find the values of the array
        fib[i] = fib[i-1] + fib[i-2];
    }
    printf("%2L.0f\n", fib[n]); //when the loop is finished i = n
    return 0;
}
