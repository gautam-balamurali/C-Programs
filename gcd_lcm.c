//gcd n lcm
#include <stdio.h>
int gcd(int,int);
int main()
{
int m,n,g,lcm;
printf("enter the two numbers\n");
scanf("%d %d",&m,&n);
g=gcd(m,n);
lcm=(m*n)/g;
printf("GCD is %d\n",g);
printf("LCM is %d\n",lcm);
}
int gcd(int m1,int n1)
{
int i;
if(m1<n1)
{
i=m1;}
else{i=n1;}
while(i>0)
{
if(m1%i==0 && n1%i==0)
{
return i;}
else{i=i-1;}
}
}

