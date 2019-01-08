//perfect no.
#include<stdio.h>
void main()
{
int n,s=0,i;
printf("enter the no.\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
s+=i;}
}
if(s==n)
{
printf("perfect no.\n");
}
else
{
printf("not perfect\n");
}
}

