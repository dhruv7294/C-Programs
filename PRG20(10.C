/*  W A P pattern
Enter No=>5
1
B B
3 3 3
D D D D
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
	if(i%2!=0)
	{
	printf("%d ",i);
	}
	else
	{
	printf("%c ",i+64);
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
B B
3 3 3
D D D D
5 5 5 5 5
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
