//to display details of books using structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
char bookname[25];
char author[25];
float price;
};
struct book *a[10];
//*a=malloc(sizeof(struct book));
int c=0;
void add_book()
{
if(c==9)
{
printf("no more space\n");
return;}
printf("enter the name of book\n");
scanf("%s",a[c]->bookname);

printf("enter author name\n");
scanf("%s",a[c]->author);
printf("enter the price\n");
scanf("%f",&a[c]->price);
c++;
}
void disp_book()
{
int i;
printf("detail of books \n");
printf("S.no.\tBookname\tAuthor\tPrice\n");
for(i=0;i<c;i++)
{
printf("%d\t%s\t%s\t%.2f\n",i+1,a[i]->bookname,a[i]->author,a[i]->price);
}
}
void auth()
{
int i,cnt=0;
char name[25];
printf("enter the name of author\n");
scanf("%s",name);
for(i=0;i<c;i++)
{
if(strcmp(name,a[i]->author)==0)
{
cnt++;
printf("%s\n",a[i]->bookname);
}
if(cnt==0)
{
printf("no such books\n");
}
}
}
void main()
{
int ch;int i;
for(i=0;i<10;i++)
a[i]=(struct book*)malloc(sizeof(struct book));
while(1)
{
printf("Menu--->\n");
printf("1.Add Book Details\n2.Display Book Details\n3.Search By Author\n4.Exit\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	add_book();
	break;
case 2:
	disp_book();
	break;
case 3:
	auth();
	break;
case 4:
	exit(0);
}
}
}
