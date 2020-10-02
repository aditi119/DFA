#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[20],f='a';
 int i;
 clrscr();
 printf("Enter the string to be checked: ");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
   printf("\nState: %c ",f);
  switch(f)
  {
   case 'a': if(str[i]=='0') f='b';
    else if(str[i]=='1') f='d ';
      else if(isalpha(str[i])) f='d';
   break;
   case 'b': if(str[i]=='0') f='b';
    else if(str[i]=='1') f='c';
    else if(isalpha(str[i])) f='d';
   break;
   case 'c': if(str[i]=='0') f='b';
    else if(str[i]=='1') f='c';
    else if(isalpha(str[i])) f='d';
   break;
   case 'd': if(str[i]=='0') f='d';
    else if(str[i]=='1') f='d';
    else if(isalpha(str[i])) f='d';
   break;
  }
 }
 if(f=='c')
  printf("\nEntered string is accepted as it reached the final state i.e., %c",f);
 else
  printf("\nEntered string is not accepted as it reached %c which not the final state",f);
getch();
}
