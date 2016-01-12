/* W A P pattren
Enter No=>5
   1 2 3 4 5                                                                    
     1 2 3 4                                                                    
       1 2 3                                                                    
	 1 2
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
for(i=1;i<no;i++)
{
	for(k=1;k<=i;k++)
	{
	printf("  ");
	}
	for(j=1;j<=no-i+1;j++)
	{
	printf(" %d",j);
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
   1 2 3 4 5
     1 2 3 4
       1 2 3
	 1 2
*/