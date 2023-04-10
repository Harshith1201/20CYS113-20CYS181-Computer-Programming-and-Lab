#include <stdio.h>
#include <math.h>
int  main() {
int base,height;
int  area;
printf("enter the base of the triangle");
scanf("%d",&base);
printf("enter the height of the triangle");
scanf("%d",&height);
area = (base*height)/2;
printf("the area of the triangle is %f", area);
return 0;
}
