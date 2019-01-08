//ncr nd npr
#include <stdio.h>
int fact(int);
int ncr(int,int);
int npr(int,int);
int main()
{
int n,r;
int nc,np;
printf("enter the values of n and r\n");
scanf("%d %d",&n,&r);
nc=ncr(n,r);
np=npr(n,r);
printf("%dC%d=%d\n",n,r,nc);
printf("%dP%d=%d\n",n,r,np);
return 0;
}
int ncr(int n,int r)
{
int result;
result=fact(n)/(fact(r)*fact(n-r));
return result;
}
int npr(int n,int r)
{
int result;
result=fact(n)/fact(n-r);
return result;
}
int fact(int n)
{
int i;
int f=1;
for(i=1;i<=n;i++)
{f=f*i;}
return f;
}

