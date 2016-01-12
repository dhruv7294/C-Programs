/* W A P Pattern
Enter No=>5
A
A B
A B C
A B C D
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
	printf("%c ",j+64);
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
A
A B
A B C
A B C D
A B C D E
*/







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

