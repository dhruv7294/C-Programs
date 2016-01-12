// W A P Maximum from 3 X 3  matrix

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],max=0;
int i,j;
clrscr();
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf("Enter No for a=>");
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
if(max<a[i][j])
max=a[i][j];
printf(" %d ",a[i][j]);
}
printf("\n");
}
printf("________________\n");

	printf("Max No is:-->%d",max);
getch();
}
/*
OUTPUT
Enter No for a=>1
Enter No for a=>2
Enter No for a=>3

Enter No for a=>4
Enter No for a=>87
Enter No for a=>3

Enter No for a=>2
Enter No for a=>1
Enter No for a=>6

 1  2  3
 4  87  3
 2  1  6
________________
Max No is:-->87

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

