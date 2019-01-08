//year week days
#include <stdio.h>
void main()
{
int y,w,d,i;
printf("enter the no. of days ");
scanf("%d",&i);
y=i/365;
i=i%365;
w=i/7;
d=w%7;
printf("%d years %d weeks %d days",y,w,d);
}
