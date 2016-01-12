/* W A P pattern
  Enter No=>5
 ABCD
  ABC
   AB
    A
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
	for(k=1;k<=i;k++)
	{
	printf(" ");
	}
	for(j=1;j<=no-i;j++)
	{
	printf("%c",j+64);
	}
	printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>5
 ABCD
  ABC
   AB
    A

  */
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

