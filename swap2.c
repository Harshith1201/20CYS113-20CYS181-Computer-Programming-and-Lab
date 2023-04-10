#include <stdio.h>
int main(){
int a,b;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("the numbers before swapping are %d and %d", a,b);
a = a+b;
b = a-b;
a = a-b;
printf("the numbers after swapping are  %d and %d" ,a,b);
return 0;
}
