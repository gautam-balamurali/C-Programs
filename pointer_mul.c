//matrix multiplication using pointers
#include<stdio.h>
void main()
{
    int i,j,k,m,n,p,q,a[5][5],b[5][5],c[5][5];
    printf("Enter the dimension of first matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Enter the dimension of second matrix:");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",*(b+i)+j);
        }
    }
    if(n==p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
            *(*(c+i)+j)=0;
                for(k=0;k<p;k++)
                    *(*(c+i)+j)=*(*(c+i)+j)+*(*(a+i)+k)**(*(b+k)+j);
            }
        }
        printf("Result is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
            printf("%d  ",*(*(c+i)+j));
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication not possible.\n");

}
