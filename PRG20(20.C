/* W A P pattren
Enter No=>5
*
**
***
****
*****
****
***
**
*

*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
int i,j,k;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}

	printf("\n");
}
for(i=1;i<=no;i++)
{
	for(j=1;j<=no-i;j++)
	{
	printf("*");
	}

	printf("\n");
}

getch();
}
/*
OUTPUT
Enter No=>5
*
**
***
****
*****
****
***
**
*

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

