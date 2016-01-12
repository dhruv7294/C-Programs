/* W A P pattren
Enter No=>5
*          *
*        *   *
*      *   *   *
*    *   *   *   *
  *   *   *   *   *

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
if(i!=no)
	printf("*");
	for(k=no;k>i;k--)
	{
	printf("  ");
	}
	for(j=1;j<=i;j++)
	{
	printf("  * ");
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
*          *
*        *   *
*      *   *   *
*    *   *   *   *
  *   *   *   *   *

*/
