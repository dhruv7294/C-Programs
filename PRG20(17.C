/* W A P pattren
Enter No=>4
*      *
**    **
***  ***
********

*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
int i,j,k,l;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
l=no+1;
for(i=1;i<=no;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	for(k=0;k<=l;k++)
	{
	printf(" ");
	}


	l=l-2;
	for(j=1;j<=i;j++)
	{
	printf("*");
	}
	printf("\n");
}
getch();
}
/*
OUTOUT
Enter No=>4
*      *
**    **
***  ***
********

*/