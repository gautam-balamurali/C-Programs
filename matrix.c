//matrix operations
#include<stdio.h>
void main()
{
int a[100][100],b[100][100],sum[100][100],sub[100][100],mm[100][100],s=0,p=1,i,j,r,c,m,n,ch,k;
printf("enter the no. of rows in 1st matrix\n");
scanf("%d",&r);
printf("enter the no. of columns in 1st matrix\n");
scanf("%d",&c);
printf("enter the elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter element\n");
scanf("%d",&a[i][j]);
}}
printf("elements in 1st matrix are\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n");

printf("enter the no. of rows in 2nd matrix\n");
scanf("%d",&m);
printf("enter the no. of columns in 2nd matrix\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("enter element\n");
scanf("%d",&b[i][j]);
}}
printf("elements in 2nd matrix are\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\n");

while(p==1)
{
printf("1.Addition\n2.Subtraction\n3.Multiplication\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: if(r==m && c==n)
	{
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	sum[i][j]=a[i][j]+b[i][j];
	}}
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",sum[i][j]);
	}
	printf("\n");}}
	else{printf("not possible\n");}
	break;

case 2: if(r==m && c==n)
	{
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	sub[i][j]=a[i][j]-b[i][j];
	}}
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",sub[i][j]);
	}
	printf("\n");}}
	else{printf("not possible\n");}
	break;

case 3: if(r==n && m==c)
	{
	for(i=0;i<r;i++)
	{
	for(j=0;j<n;j++)
	{
	for(k=0;k<m;k++)
	{
	s=s+a[i][k]*b[k][j];
	}
	mm[i][j]=s;
	s=0;
	}}
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",mm[i][j]);
	}
	printf("\n");}}
	else{printf("not possible\n");}
	break;

default: printf("try again\n");
}
printf("if u want 2 continue press 1\n");
scanf("%d",&p);
}
}

