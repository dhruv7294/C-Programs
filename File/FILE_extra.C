#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1,*f2;
char ch,ch1;
clrscr();
f1=fopen("12.txt","r");
f2=fopen("2.txt","r");
while(ch!='\0')
{
ch=getc(f1);
ch1=getc(f2);
}
fclose(f1);
fclose(f2);
printf("\n To file is..");
printf("\n %s",ch);
printf("\n %s",ch1);

getch();
}
