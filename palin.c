//palindrome
#include<stdio.h>
#include<string.h>
void main()
{
  __fpurge(stdin);
  int l,i,j,k,s,flag;
  char str[50],rev_str[50];
  puts("Enter a string:");
  gets(str);
  l=strlen(str);
  for(i=l-1,j=0;i>=0;i--,j++)
  {
      rev_str[j]=str[i];
  }
  rev_str[l]='\0';
  s=0;
  for(i=0;i<=l;i++)
  {
      if(str[i]==' ' || str[i]=='\0')
      {
          flag=0;
          for(j=s,k=l-i;j<i;j++,k++)
          {
              if(str[j]!=rev_str[k])
              {
                  flag=1;
                  break;
              }
          }
          if(flag==0)
          {printf("palindrome\n");
              for(j=s;j<i;j++)
              {
                  printf("%c",str[j]);
              }
              printf("\n");
          }
      s=i+1;
      }

  }
}

