#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
int no[N],s,lb=0,ub=4,mid;
int i;
clrscr();
for(i=0;i<N;i++)
{
printf("Enter No=>");
scanf("%d",&no[i]);
}
printf("Enter Search No=>");
scanf("%d",&s);
while(lb<=ub)
{
mid=(lb+ub)/2;
if(s==no[mid])
{
return ;
}
else if(s<no[mid])
{
   ub=mid-1;
}
else
{
lb=mid+1;
}
}
printf("No is Found");

printf("No is Not found");

getch();
}