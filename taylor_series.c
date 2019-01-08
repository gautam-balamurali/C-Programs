//taylor series
#include<stdio.h>
#include<math.h>
void main()
{
int b=1,n,i,j,f,r;
float x,e,s1,s2;
while(b==1)
{
	printf("1.Exponential\n2.Sine\n3.Cosine\n");
	printf("enter the choice\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1: printf("enter the range\n");
		scanf("%d",&r);
		printf("enter the value of x\n");
		scanf("%f",&x);
		s1=0.0;s2=1.0;
		for(i=1;i<=r;i+=2)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s1+=(float)(pow(x,i))/f;
		}
		for(i=2;i<=r;i+=2)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s2+=(float)(pow(x,i))/f;
		}
		e=s1+s2;
		printf("e^x=%f\n",e);
		break;

	case 2: printf("enter the range\n");
		scanf("%d",&r);
		printf("enter the value of x\n");
		scanf("%f",&x);
		s1=0;s2=0;x*=3.14/180;
		for(i=1;i<=r;i+=4)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s1+=(pow(x,i))/f;
		}
		for(i=3;i<=r;i+=4)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s2+=(pow(x,i))/f;
		}
		e=s1-s2;
		printf("sinx=%d\n",e);
		break;

	case 3: printf("enter the range\n");
		scanf("%d",&r);
		printf("enter the value of x\n");
		scanf("%f",&x);
		s1=0;s2=0;x*=3.14/180;
		for(i=0;i<=r;i+=4)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s1+=(pow(x,i))/f;
		}
		for(i=2;i<=r;i+=4)
		{
		f=1;
		for(j=1;j<=i;j++)
		{
		f=f*j;}
		s2+=(pow(x,i))/f;
		}
		e=s1-s2;
		printf("cosx=%d\n",e);
		break;
	default:printf("pls try again\n");
	}
printf("press 1 if u want 2 continue\n");
scanf("%d",&b);
}
}




		
