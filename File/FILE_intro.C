//W A P open a file write a some text and close it

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1;
	char ch;
clrscr();

	f1=fopen("1.txt","r");

	while(ch!=EOF)
	{
	ch=getc(f1);
	printf("%c",ch);
	}
	fclose(f1);
getch();
}
/*
OUTPUT

Hello Friend enjoy today....

*/ÿ


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

