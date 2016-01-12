// W A P to a string till user 	press "*"  and store in file  on hard disk

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
FILE *f1;
char ch;
clrscr();
f1=fopen("11.txt","w");
do
{
	scanf("%c",&ch);
	if(ch=='*')
	{
	printf("Byeeee...") ;
	getch();
	return;
	}
	else
	{
	putc(ch,f1);
	}
}
	while(ch!='*');
fclose(f1);
getch();
}
/*
OUTPUT
ph
hp
ph
hp
ph
hp
*
Byeeee...

*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
