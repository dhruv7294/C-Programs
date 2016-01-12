// W A P to copy content one file into another file

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
FILE *f1,*f2;
char str[20],ch;
int i=0;
clrscr();
printf("Enter Your Name=>");
gets(str);
f1=fopen("6.txt","w");
f2=fopen("7.txt","w");
while(str[i]!='\0')
{
ch=tolower(str[i]);
putc(str[i],f1);
putc(str[i],f2);
i++;
}
fclose(f1);
fclose(f2);
printf("file is Susessful Copy");
getch();
}
/*
OUTPUT
Enter Your Name=>priteshhar
file is Susessful Create & Copy

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
