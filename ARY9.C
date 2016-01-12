// W A P to print Acending Oder value using array

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
for(i=0;i<N;i++)
{
for(j=0;j<N-1;j++)
{
if(no[j]>no[j+1])
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
Enter No=>7
Enter No=>3
Enter No=>1
Enter No=>5
Enter No=>2

 Shorting Value
 1
 2
 3
 5
 7
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
