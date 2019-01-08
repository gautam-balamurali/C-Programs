//array operations
#include<stdio.h>
int a[20],n;
void ins(int ele ,int posi)
{
    int i;
    for(i=n-1;i>=posi;i--)
    {
        a[i+1]=a[i];
    }
    a[posi]=ele;
    n=n+1;
}
void dele(int posi)
{
    int i;
    for(i=posi;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
}
void array_print()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
void main()
{
    int op,ele,posi,i,res;
    printf("Enter how many elements:");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
    printf("1.Insertion\n2.Deletion\nChoose an option:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Enter the element to insert followed by position:");
        scanf("%d%d",&ele,&posi);
	if(posi==0 || posi<0)
	{
	printf("not possible");}
	else
        {
        ins(ele,posi-1);
        array_print();}
    }
    else if(op==2)
    {
        printf("Enter the position of element to delete:");
        scanf("%d",&posi);
	if(posi==0)
	{
	printf("not possible\n");
	}
	else
	{
        dele(posi);
        array_print();}
    }
    printf("\nPress 1 to continue:");
    scanf("%d",&res);
    }while(res==1);
}
