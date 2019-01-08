//quadratic
#include <stdio.h>
#include <math.h>
void main()
{
float a,b,c,d,r1,r2,r;
printf("enter coefficient of x^2\n");
scanf("%f",&a);
printf("enter coefficient of x\n");
scanf("%f",&b);
printf("enter coefficient of constant\n");
scanf("%f",&c);
d=pow(b,2)-(4*a*c);
if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("roots are real\n");
printf("roots are %f and %f\n",r1,r2);
}
else if(d==0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("roots are real and equal\n");
printf("roots are %f and %f\n",r1,r2);
}
else if(d<0)
{
r=(-b/(2*a));
r1=sqrt(-d)/(2*a);

printf("roots are complex\n");
printf("roots are %f + i%f\n",r,r1);
printf("roots are %f - i%f\n",r,r1);
}
}



