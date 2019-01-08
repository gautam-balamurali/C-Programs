//fibonacci
#include<stdio.h>
int fibi(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return fibi(n-1)+fibi(n-2);
}
void main()
{
    int n,i;
    printf("Enter how many terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d  ",fibi(i));
    }
printf("\n");
}
