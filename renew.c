 #include <stdio.h>
#include <math.h>
int main(void){
    int n, i, j;
    printf("Enter a integer : ");
    scanf("%d", &n);
    for (i = n; i >= 2; i = i-2){
        for(j = 1; j <=n; j = j+1){
            printf("%d",  0);
        }
    }
}
