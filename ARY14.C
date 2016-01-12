// W A P  multiply 3 x 3 two matrix

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],b[N][N],mul[N][N];
int i,j,index=0;
clrscr();
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf("Enter No for a=>");
scanf("%d",&a[i][j]);
printf("Enter No for b=");
scanf("%d",&b[i][j]);
}
printf("\n");
}
for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf(" %d ",a[i][j]);
}
printf("\n");
}
printf("\n________________\n");

for(i=0;i<N;i++)
{
for(j=0;j<N;j++)
{
printf(" %d ",b[i][j]);
}
printf("\n");
}
printf("\n_________________\n");
for(i=0;i<N;i++)
{
 for(j=0;j<N;j++)
 {
	mul[i][j]=a[i][j]*b[i][j];
	printf(" %d ",mul[i][j]);
 }
 printf("\n");
}
getch();
}
/*
OUTPUT
Enter No for b=3
Enter No for a=>2
Enter No for b=3

Enter No for a=>2
Enter No for b=3
Enter No for a=>2
Enter No for b=3
Enter No for a=>2
Enter No for b=3

 2  2  2
 2  2  2
 2  2  2

________________
 3  3  3
 3  3  3
 3  3  3

_________________
 6  6  6
 6  6  6
 6  6  6


*/
