//part of fibonacci series
#include<stdio.h>
void main()
{
int m,n,c,a,b;
c=0;a=-1;b=1;
printf("enter the nmbr\n");
scanf("%d",&n);
m=n;
while(c!=n)
{
c=a+b;
a=b;
b=c;
if(c>n)
{
break;}
}
if(c==m)
{
printf("yes %d belongs to fibonacci series\n",m);
}
else
{
printf("no %d don't belongs to fibonacci series\n",m);
}
}
