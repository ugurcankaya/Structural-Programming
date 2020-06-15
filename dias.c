#include <stdio.h>
#include <math.h>
float dias(int n, float m[][n]);
int main(void){
    int i, j;
    float a[3][3];
    printf("Enter the 3x3 Matrix \n");
    for(i = 0; i<3; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &a[i][j]);
        }
    }
    
    printf("Sum of diagonal = %.2f", dias(3, a));
    
    
    return 0;
    
}

float dias(int n, float m[][n]){
    float t = 0;
    int i;
    for(i = 0; i < n; i++){
        t = t+m[i][i];
    }
    return t;
}
