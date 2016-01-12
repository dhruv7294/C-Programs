// W A P which writes a string in file and reads from file

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
FILE *f1;
char str[20],ch;
int i=0;
clrscr();

printf("Enter Your Name=>");
gets(str);
f1=fopen("10.txt","w");
while(str[i]!='\0')
{
ch=tolower(str[i]);

putc(str[i],f1);
i++;
}

fclose(f1);
printf("Tow file is Susessful Create & Copy\n");

f1=fopen("10.txt","r");
ch=getc(f1);

while(ch!=EOF)
{
 printf("%c",ch);
ch=getc(f1);
}
fclose(f1);
getch();
}
/*
OUTPUT
Enter Your Name=>priteshhar
Tow file is Susessful Create & Copy
priteshhar

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
