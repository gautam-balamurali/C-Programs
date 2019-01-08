//prime range
#include<stdio.h>
void main()
{
int i,j,h,l,e=1;
printf("enter the lower range\n");
scanf("%d",&l);
printf("enter the higher range\n");
scanf("%d",&h);
for(i=l;i<=h;i++)
{
if(i>1)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
e=0;break;
}
}
if(e==1)
{
printf("%d\n",i);
}
}

e=1;
}
}
