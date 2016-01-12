// W A P count No of positive or negative values from  3 x 3 matrix array

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],cntp=0,cntn=0;
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
	if(a[i][j]>0)
	{
	  cntp++;
	}
	else if(a[i][j]<0)
	{
	cntn++;
	}
printf(" %d ",a[i][j]);
}
printf("\n");
}
printf("________________\n");
printf("\n Positive is No=>%d",cntp);
printf("\n Negative is No=>%d",cntn);
getch();
}
/*
OUTPUT
Enter No for a=>1
Enter No for a=>2
Enter No for a=>3

Enter No for a=>4
Enter No for a=>-5
Enter No for a=>6

Enter No for a=>-8
Enter No for a=>3
Enter No for a=>4

 1  2  3
 4  -5  6
 -8  3  4
________________

 Positive is No=>7
 Negative is No=>2

*/
                                                                                
                                                                                
                                                                                
                                                                                

