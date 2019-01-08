//complex operations using structure
#include<stdio.h>
#include<stdlib.h>
struct complex
{
    int real,img;
};
void main()
{
   int op,temp1,temp2,temp3;
   char c;
   struct complex n1,n2;
   struct complex *ptr1=&n1;
   struct complex *ptr2=&n2;
   do
   {
    printf(("Enter the real part and imaginary part of  first complex number:"));
    scanf("%d%d",&ptr1->real,&ptr1->img);
    printf(("Enter the real part and imaginary part of  second complex number:"));
    scanf("%d%d",&ptr2->real,&ptr2->img);
   printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\nChoose an option:");
   scanf("%d",&op);
   if(op==1)
   {
       temp1=ptr1->real+ptr2->real;
       temp2=ptr1->img+ptr2->img;
       printf("Result is %d+%di\n",temp1,temp2);
   }
  else if(op==2)
   {
       temp1=ptr1->real-ptr2->real;
       temp2=ptr1->img-ptr2->img;
       printf("Result is %d+%di\n",temp1,temp2);
   }
    else if(op==3)
   {
       temp1=(ptr1->real*ptr2->real)+(ptr1->img*ptr2->img);
       temp2=(ptr1->img*ptr2->real)+(ptr1->real*ptr2->img);
       temp3=(ptr2->real*ptr2->real)+(ptr2->img*ptr2->img);
       printf("Result is %d/%d+%d/%di\n",temp1,temp3,temp2,temp3);
   }
   else if(op==4)
   {
       temp1=(ptr1->real*ptr2->real)+(-1*ptr1->img*ptr2->img);
       temp2=(ptr1->real*ptr2->img)+(ptr1->img*ptr2->real);
       printf("Result is %d+%di\n",temp1,temp2);
   }
    printf("Do you want to continue(y/n)");
    __fpurge(stdin);
    scanf("%c",&c);
    system("clear");
    }while(c=='Y' || c=='y');
}
