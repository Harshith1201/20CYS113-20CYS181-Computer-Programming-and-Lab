#include <stdio.h>
int main(){
int x,y,temp;
printf("enter the first number ");
scanf("%d",&x);
printf("enter the second number");
scanf("%d",&y);
printf("the numbers before swapping are %d and %d",x,y);
temp=x;
x=y;
y=temp;
printf("the numbers after swapping are %d and %d",x,y);
return 0;
}

