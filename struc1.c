//to display student details and sort rankings accordingly using structure
#include<stdio.h>
#include<string.h>
struct student
{
char name[25];
char dob[11];
int m1,m2,m3;
};
int main()
{
int i,n,j,t;
char n1[25],d[11];
printf("enter the no. of students\n");
scanf("%d",&n);
struct student s[n];
int a[n];
printf("enter details\n");
for(i=0;i<n;i++)
{
printf("enter the name of student %d\n",i+1);__fpurge(stdin);
gets(s[i].name);
printf("enter the Date Of Birth of student %d\n",i+1);__fpurge(stdin);
gets(s[i].dob);
printf("enter the marks of 3 subjects student %d\n",i+1);
scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
}
for(i=0;i<n;i++)
{
a[i]=s[i].m1+s[i].m2+s[i].m3;
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j+1]>a[j])
{
t=a[j+1];strcpy(n1,s[j+1].name);strcpy(d,s[j+1].dob);
a[j+1]=a[j];strcpy(s[j+1].name,s[j].name);strcpy(s[j+1].dob,s[j].dob);
a[j]=t;strcpy(s[j].name,n1);strcpy(s[j].dob,d);
}
}
}
printf("Rank\tName\tMarks\tDOB\n");
for(i=0;i<n;i++)
{
printf("%d\t%s\t%d\t%s\n",i+1,s[i].name,a[i],s[i].dob);
}
return 0;
}
