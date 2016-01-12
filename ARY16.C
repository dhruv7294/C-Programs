// W A P Maximum from 3 X 3  matrix

#include<stdio.h>
#include<conio.h>
#define N 3
void main()
{
int a[N][N],maex=1;
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
printf(" %d ",a[i][j]);
}
printf("\n");
}
printf("________________\n");

printf("\n");
	if(max<a[i][j])
	{
	 max=a[i][j];
	}
	printf("%d",max);
getch();
}
