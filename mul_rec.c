//multiply recursion
#include<stdio.h>
int mul(int i,int n)
{
    if(i==11)
        return 0;
    else
        printf("%d * %d=%d\n",n,i,n*i);
        mul(i=i+1,n);
}
int main()
{
    int n;
    printf("Enter the number to get table:");
    scanf("%d",&n);
    mul(1,n);
}
