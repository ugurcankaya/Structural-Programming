#include <stdio.h>


/*
 Write a C program which reads 10 integers from the user and put the
 integers between 10 and 50 (both included) into an array and print it.
 */


int main(void){
    int a[10], n, z = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n>=10 && n<=50) {
            a[z] = n;
            z += 1;
        }
    
    }
    
    for (n = 0; n<z; n++) {
        printf("a[%d] = %d\n", n, a[n]);
        
    }
    
    
    
}
