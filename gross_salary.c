//gross salary
#include <stdio.h>
void main()
{
float b,d,h,g;
printf("enter the basic pay\n");
scanf("%f",&b);
if(b>=8000)
{
d=(0.2)*b;
h=(0.25)*b;
g=d+h+b;
}
else
{
d=(0.15)*b;
h=(0.20)*b;
g=d+h+b;
}
printf("%f is gross salary\n",g);
}
