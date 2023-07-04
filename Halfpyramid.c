#include <stdio.h>

int main() {
    int i,r,j;
    scanf("%d",&r);
    if(r>0 && r<25){
        for(i=0;i<r;i++){
            for(j=0;j<=i;j++){
                printf("*\t");
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid Input");
    }
    
    return 0;
}
