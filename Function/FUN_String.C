// W A P using function shorting a string chacter.

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
char a[10];
int i,j;
char temp;
clrscr();
printf("Enetr the charcter =>");
gets(a);
for(i=0;i<=strlen(a)-1;i++)
{
	for(j=0;j<strlen(a)-1-i;j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
}
printf(" \n \t____Shorting value\n %s",a);

getch();
}
/*
OUTPUT
Enetr the charcter =>pritesh
                                                                                
        ____Shorting value                                                      
 ehiprst                                                                        
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
