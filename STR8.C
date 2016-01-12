// W A P for Reverse string

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[10],rec[10],len;
int i,j;
clrscr();
printf("\nEnter name==>");
scanf("%s",name);
printf("\nname=%s",name);
       len=strlen(name);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
	rec[j]=name[i];
	}
	rec[j]='\0';
	printf("\nreversed =%s",rec);
getch();
}

/*
OUTPUT

Enter name==>prithar

name=prithar
reversed =rahtirp

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
