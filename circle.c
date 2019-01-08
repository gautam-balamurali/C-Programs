//area of circle
#include <stdio.h>
#define pi 3.14
void main()
{
float a,c,r;
printf("enter radius ");
scanf("%f",&r);
a=pi*r*r;
c=2*pi*r;
printf("area is %f \n circumference is %f \n",a,c);
}
