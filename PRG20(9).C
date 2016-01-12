/* W A P pattern
Enter No=>5
A
1 2
A B C
1 2 3 4
A B C D E
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
	if(i%2!=0)
	{
	printf("%c ",j+64);
	}
	else
	{
	printf("%d ",j);
	}
	}
	printf("\n");
}
getch();
}

/*
OUTPUT
Enter No=>5
A
1 2
A B C
1 2 3 4
A B C D E
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
