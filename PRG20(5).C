/* W A P pattern
Enter No=>5
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
int i,j;
clrscr();
printf("Enter No=>");
scanf("%d",&no	);
for(i=1;i<=no;i++)
{
	for(j=1;j<=i;j++)
	{
	if(j%2!=0)
	{
	printf("1 ");
	}
	else
	{
	printf("0 ");
	}
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

