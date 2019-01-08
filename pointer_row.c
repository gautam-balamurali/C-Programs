//pointer row n col sum
#include<stdio.h>
void main()
{
    int i,j,r,p,q,a[5][5],r_sum[5],c_sum[5];
    printf("Enter the dimension of matrix:");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    for(i=0;i<p;i++)
    {
        *(r_sum+i)=0;
        for(j=0;j<q;j++)
        {
           *(r_sum+i)=*(r_sum+i)+*(*(a+i)+j);
        }
    }
    for(i=0;i<q;i++)
    {
        *(c_sum+i)=0;
        for(j=0;j<p;j++)
        {
           *(c_sum+i)=*(c_sum+i)+*(*(a+j)+i);
        }
    }
    printf("Row sum is\n");
    for(i=0;i<p;i++)
    {
        printf("%d  \n",*(r_sum+i));
    }
    printf("Column sum is\n");
    for(i=0;i<q;i++)
    {
        printf("%d  ",*(c_sum+i));
    }

printf("\n");
}
