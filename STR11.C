#include<stdio.h>
#include<conio.h>
void main()
{
char name[100]={"hi i am pritesh darji   i am from rajasthan\n "};
int i,ch=0,word=1,line=0,space=1;
clrscr();
printf("\n %s",name);

for(i=0;i<name[i]!='\0';i++)
{
if(name[i]!=' ')
{
ch++;
}
if(name[i]=='\n')
{
line++;
}
if(name[i]==' ')
{
space++;
}
}
printf("\n Number of chactar =>%d",ch);
printf("\n Number of space => %d",space+1);
printf("\n Number of line=> %d",line+1);
getch();
}