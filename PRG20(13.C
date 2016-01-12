/* W A P pattern
Enter No=>5
	  1
	2   2
      3   3   3
    4   4   4   4
  5   5   5   5   5
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
	for(k=no;k>i;k--)
	{
	printf("  ");
	}
	for(j=1;j<=i;j++)
	{
	printf("  %d ",i);
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
	  1
	2   2
      3   3   3
    4   4   4   4
  5   5   5   5   5

*/