// W A P input 10 no in descending oder

#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N];
int i,j,temp;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
printf("\n Desending oder Value");
for(i=N-1;i>=0;i--)
{
printf("\n %d",no[i]);
}
for(i=0;i<N;i++)
{
for(j=0;j<N-1;j++)
{
if(no[j]<no[j+1])
{
temp=no[j];
no[j]=no[j+1];
no[j+1]=temp;
}
}
}
printf("\n Shorting Value");
for(i=0;i<N;i++)
{
printf("\n %d",no[i]);
}
getch();
}
/*
OUTPUT
Enter No=>5
Enter No=>4
Enter No=>2
Enter No=>7
Enter No=>1

 Desending oder Value
 1
 7
 2
 4
 5
 Shorting Value
 7
 5
 4
 2
 1

*/