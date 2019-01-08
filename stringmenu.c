//rev string, count char occurence,vowels,consonants,words
#include<stdio.h>
#include<string.h>
void main()
{
 int co=0,cv=0,cc=0,cw=0,op,i,ctr=0,z,j;
 char temp,s[80],ch;
 printf("enter the text : ");
  __fpurge(stdin);   
  gets(s);
 do
 {	
   printf("\n1.reverse\n2.count occurence\n3.count vowels&");
   printf("consonants & words\n");
   printf("enter option : ");
   scanf("%d",&op);
	switch(op)
   {
	case 1:for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
	       {  
                 temp=s[i]; 
		s[i]=s[j]; 
		s[j]=temp; 
               }
		printf("reversed string : %s\n",s);
		break;
		case 2:printf("enter the char to count : ");
		 __fpurge(stdin);
		 scanf("%c",&ch);
		 for(i=0;s[i]!='\0';i++)
                if(s[i]==ch) ctr++;
		printf("no. of '%c' = %d\n",ch,ctr);
                break;
		case 3:for(i=0;s[i]!='\0';i++)
               switch(s[i])
		{
                 case 'a':
 		 case 'e':
		 case 'i':
		 case 'o':
		 case 'u':
		 case 'A':
		 case 'E':
		 case 'I':
		 case 'O':
		 case 'U':cv++; break;
                 default: if(s[i]!=' ') cc++;
                }
		for(i=0;s[i]!='\0';i++)
              	   if(s[i]==' ') cw++;
                if(cw!=0) cw++;
              printf("words = %d\n",cw);
              printf("vowels = %d\nconsonants = %d\n",cv,cc);
              break;
  }
  printf("try again [1/0] ? : ");
  scanf("%d",&z);
 }while(z==1);
}

