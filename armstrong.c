//armstrong
#include<stdio.h>
void main()
{
int n,s,r,m;
printf("enter the nmbr\n");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
s+=r*r*r;
n=n/10;
}
if(s==m)
{
printf("armstrong no.\n");
}
else
{
printf("not armstrong no.\n");
}
}

