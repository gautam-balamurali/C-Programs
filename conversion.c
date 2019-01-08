//number conversion
#include <stdio.h>
#include <math.h>
int bin2dec(long);
long dec2bin(int);
long oct2dec(int);
int dec2oct(int);
int main()
{
int c,d,o,d1;
long b;
do
{
printf("1.Binary To Decimal\n2.Decimal To Binary\n3.Octal To Decimal\n4.Decimal To Octal\n5.Exit\n");
printf("enter your choice\n");
scanf("%d",&c);
switch(c)
{
case 1:
	
	printf("enter binary no.\n");
	scanf("%ld",&b);
	printf("Decimal no.=%d\n",bin2dec(b));
	break;
case 2:
	
	printf("enter decimal no.\n");
	scanf("%d",&d);
	printf("Binary no.=%d\n",dec2bin(d));
	break;
case 3:
	
	printf("enter octal no.\n");
	scanf("%d",&o);
	printf("Decimal no.=%d\n",oct2dec(o));
	break;
case 4:
	
	printf("enter decimal no.\n");
	scanf("%d",&d1);
	printf("Octal no.=%d\n",dec2oct(d1));
	break;
default:
	printf("THANK YOU\n");
}
}while(c!=5);
return 0;
}
int bin2dec(long n)
{
int d=0,i=0,r;
while(n!=0)
{
r=n%10;
n=n/10;
d+=r*pow(2,i);
++i;
}
return d;
}
long dec2bin(int n)
{
long b=0;
int r,i=1,step=1;
while(n!=0)
{
r=n%2;
printf("step %d : %d/2,remainder=%d,quotient=%d\n",step++,n,r,n/2);
n/=2;
b+=r*i;
i*=10;
}
return b;
}
long oct2dec(int n)
{
int d=0,i=0;
while(n!=0)
{
d+=(n%10)*pow(8,i);
++i;
n=n/10;
}
i=1;
return d;
}
int dec2oct(int n)
{
int o=0,i=1;
while(n!=0)
{
o+=(n%8)*i;
n/=8;
i*=10;
}
return o;
}


