// W A P usinf function revres string.

#include<stdio.h>
#include<conio.h>
#include<string.h>
char rev(char ch[10])
{
int i,j;
char str1[10];
for(i=strlen(ch)-1,j=0 ;i>=0;i--,j++)
{
  str1[j]=ch[i];
  printf(" \nReverse is %c",str1[j]);
}
str1[j]='\0';
printf("\nstr1=%s",str1);
}
void main()
{
char str[10];
clrscr();
printf("Enter string=>");
gets(str);
rev(str);
getch();
}
/*
OUTPUT
Enter string=>prithar

Reverse is r
Reverse is a
Reverse is h
Reverse is t
Reverse is i
Reverse is r
Reverse is p
str1=rahtirp

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
