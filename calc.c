//calculator
#include <stdio.h>
void main()
{
float a,b,c;int n;
printf("enter your choice\n");
printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Remainder\n");
scanf("%d",&n);
switch(n)
{
case 1:
	
	printf("enter 1st no.\n");
	scanf("%f",&a);
	printf("enter 2nd no.\n");
	scanf("%f",&b);
	c=a+b;
	printf("%f is result\n",c);
	break;
case 2:
	
	printf("enter 1st no.\n");
	scanf("%f",&a);
	printf("enter 2nd no.\n");
	scanf("%f",&b);
	c=a-b;
	printf("%f is result\n",c);
	break;
case 3:
	
	printf("enter 1st no.\n");
	scanf("%f",&a);
	printf("enter 2nd no.\n");
	scanf("%f",&b);
	if(b==0)
	{
	 printf("invalid\n");
	 break;
	}
	c=a/b;
	printf("%f is result\n",c);
	break;
case 4:
	
	printf("enter 1st no.\n");
	scanf("%f",&a);
	printf("enter 2nd no.\n");
	scanf("%f",&b);
	c=a*b;
	printf("%f is result\n",c);
	break;
case 5:
	
	printf("enter 1st no.\n");
	scanf("%f",&a);
	printf("enter 2nd no.\n");
	scanf("%f",&b);
	c=(int)a%(int)b;
	printf("%f is result\n",c);
	break;
default:
	printf("try again\n");
}
}



