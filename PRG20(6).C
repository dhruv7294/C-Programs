/* W A P Partern
Enter No=>5
1
01
010
1010
10101
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int no;
int i,j,k=0;
clrscr();
printf("Enter No=>");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
	for(j=1;j<=i;j++)
	{
		if(k==0)
		{
			k=1;
			printf("%d",k);
		}
		else
		{
			k=0;
			printf("%d",k);
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
01
010
1010
10101
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
