#include <stdio.h>
#include <math.h>
int main(){
int t1 ,t;
printf("enter the time since the power failure: ");
scanf("%d",&t);
(double)t1 = (4*pow(t,2))/(t+2)-20;
printf("the estimated temperature inside the freezer after the power cut is %3d",t1);
return 0;
}

