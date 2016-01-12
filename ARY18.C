// W A P transpose given matrix of array

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],trans[N][N];
int i,j;
clrscr();
for(i=0;i<N;i++)
{
	for(j=0;j<N;j++)
	{
	printf("Enter No=>");
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<N;i++)
{
	for(j=0;j<N;j++)
	{
	printf(" %d ",a[i][j]);
	}
	printf("\n");
}
printf("___________\n");
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{

  printf(" %d ",a[j][i]);
}
printf("\n");
}
getch();
}
/*
OUTPUT
Enter No=>1
Enter No=>2
Enter No=>3
Enter No=>4
Enter No=>5
Enter No=>6
Enter No=>7
Enter No=>8
Enter No=>9
 1  2  3
 4  5  6
 7  8  9
___________
 1  4  7
 2  5  8
 3  6  9

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

