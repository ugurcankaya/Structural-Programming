#include <stdio.h>


/*
 Write a program to do the following:
 - Reads a 5x5 square matrix
 - Find the sum of even numbers at each column
 - Create and print the row matrix consisting of the values found in the
 previous step.
 */


int main(void){
    int a[5][5], b[5]={0}, i, j;
    //i row, j column
    for (i=0; i<5; i++) {//row
        for (j=0; j<5; j++) {//column
            printf("[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //and now i need to read column and sum the even numbers in the column
   
    for (j=0; j<5; j++) {//column
        for (i=0; i<5; i++) {//row
            if(a[i][j] % 2 == 0){
                
                b[j] = b[j]+a[i][j];
            }
        }
    }
    
     for (i=0; i<5; i++) {//row
           for (j=0; j<5; j++) {//column
               printf("%d\t", a[i][j]);
           }
         printf("\n");
       }
    
    printf("-------------------------------------\n");
    for (i=0; i<5; i++) {
        printf("%d\t", b[i]);
    }
    
    
}
