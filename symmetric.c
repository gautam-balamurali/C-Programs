//symmetric
#include<stdio.h>
void main()
{
int a[100][100],f=0,i,j,r,c;
printf("enter the no. of rows in  matrix\n");
scanf("%d",&r);
printf("enter the no. of columns in  matrix\n");
scanf("%d",&c);
printf("enter the elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("enter element\n");
scanf("%d",&a[i][j]);
}}
printf("elements in matrix are\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=a[j][i])
{f=1;break;}
}}
if(f==0)
{printf("symmetric\n");}
else
{printf("not symmetric\n");}
}
