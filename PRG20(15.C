/* W A P pattern
Enter No=>5
  5   4   3   2   1
    5   4   3   2
      5   4   3
	5   4
	  5

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
for(i=0;i<no;i++)
{
	for(k=1;k<=i;k++)
	{
	printf("  ");
	}
	for(j=no;j>=1+i;j--)
	{
	printf("  %d ",j);
	}
	printf("\n");
}
getch();
}

/*
OUTPUT
Enter No=>5
  5   4   3   2   1
    5   4   3   2
      5   4   3
	5   4
	  5


*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
