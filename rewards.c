#include <stdio.h>
int main(){
double  kms_run,reward;
printf("enter the number or kilo meters you ran today");
scanf("%lf",&kms_run);
reward = kms_run/10;
printf("hurray! your reward is %lf",reward);
return 0;
}
