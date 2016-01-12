#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1,*f2,*f3;
char ch,ch2;
clrscr();
f1=fopen("1.txt","r");
f2=fopen("7.txt","r");
f3=fopen("9.txt","w");
  ch=getc(f1);
while(ch!=EOF)
{

  putc(ch,f3);
  ch=getc(f1);
}
fclose(f1);
  ch2=getc(f2);
while(ch2!=EOF)
{
  putc(ch2,f3);
  ch2=getc(f2);
}
fclose(f2);
fclose(f3);

printf("Marge Susesfuly....");
getch();
}