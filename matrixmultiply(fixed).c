#include <stdio.h>


int main() {
    int a[3][3], b[3][3], mul[3][3], i, j, k;
    
    
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
   

    
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            mul[i][j] = 0;
            for (k = 0; k < 4; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
