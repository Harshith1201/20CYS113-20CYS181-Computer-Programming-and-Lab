#include <stdio.h>
#include <math.h>
int main(){
int time,volume;
double hours;
printf("enter the volume of liquid to be infused :  ");
scanf("%d",&volume);
//to print the volume of waater to be infused
printf("The amount of water to be infused is %d ml \n",volume);
//taking in the time which is infused
printf("enter the duration in which the liquid should be infused in minutes\n");
scanf("%d",&time);
hours =(double) time/60;
printf("the  liquid should be infused at %lf ml per hour",volume/hours);
return 0;
} 

