#include <stdio.h>
#include <math.h>
void main(){
int a,b,c;
float discr;
printf("enter the coefficient of x^2");
scanf("%d",&a);
printf("enter the coefficient of x");
scanf("%d",&b);
printf("enter the coefficient of the constant");
scanf("%d",&c);
discr = sqrt(pow(b,2)-(4*a*c));
printf("the roots of the quadratic equation are %1f and %1f",(-b+discr)/2*a,(-b-discr)/2*a );
}
