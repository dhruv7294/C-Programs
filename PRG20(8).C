/* W A P pattern
Enter No=>5
A                                                                               
B B                                                                             
C C C                                                                           
D D D D                                                                         
E E E E E                                                                       
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
	printf("%c ",i+64);
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
A
B B
C C C
D D D D
E E E E E

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

