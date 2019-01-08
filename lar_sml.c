//largest n smallest element
#include<stdio.h>
void main()
{
int n;
printf("How many elements you want to enter\n");
scanf("%d",&n);
int a[n],l,s,i;
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=a[0];
for(i=0;i<n;i++)
{
if(l<a[i])
l=a[i];}
s=a[0];
for(i=0;i<n;i++)
{
if(s>a[i])
s=a[i];}
printf("largest is =%d\n",l);
printf("smallest is =%d\n",s);
}
