#include <stdio.h>
int main(){
    int number,q,r,result=0;
    scanf("%d",&number);
    q=number;
    while(q!=0){
        r=q%10;
        result=result*10+r;
        q=q/10;
    }
    if(result==number){
        printf("Is a palindrome.");
    }
    else{
        printf("Is not a palindrome.");
    }
    return 0;
}
