// W A P length of string using pointer

#include<stdio.h>
#include<conio.h>
int len(char *);
void main()
{
char name[20];
int namelen;
clrscr();
printf("\n Enter The string=>");
scanf("%s",name);
namelen=len( name);
printf("\n String lenght is => %d",namelen);
getch();
}
int len( char *p)
{
int count=0;
while(*p!='\0')
{
count++;
p++;
}
return count;
}
/*
OUTPUT

 Enter The string=>pritesh

 String lenght is => 7

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
