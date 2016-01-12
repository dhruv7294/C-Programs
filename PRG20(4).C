/* W A P pttern
Enter No=>5
5
5 5
5 5 5
5 5 5 5
5 5 5 5 5
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
int i,j;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("5 ");
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
5
5 5
5 5 5
5 5 5 5
5 5 5 5 5









